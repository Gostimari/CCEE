%% Startup
clear;clc;close all;
run('../startup'); % adição da path para usar a libraria para comunicar com o motor 

% parametros do motor
Jm = 1.3475e-6;
Ra = 8;
Ke = 0.0159;
Kf = 0.000001176;
La = 0;
Bm=Kf;

% parametros função de transferência do motor
K1 = Ke/(Ra*Jm);
alfa = (Bm+(Ke^2)/Ra)/Jm;
Km = K1/alfa;
Tm= 1/alfa;

% ex 1)
%% a)
% obtenção do modelo do motor em espaços de estados continuo
A = [0 1;0 -1/Tm];
B = [0;Km/Tm];
C = [1 0];
D = 0;

% dinamica desejada continua em malha fechada
wn = 20;
zeta = 1;
h = 0.03; %sampling time

% obtenção do modelo do motor em espaços de estados dicreto
[phi,gama]=c2d(A,B, h);

% obtenção dos polos equivalentes discretos de malha fechada
wnh=wn*h; 
p1=-2*exp(-zeta*wnh)*cos(wnh*sqrt(1-zeta^2));
p2= exp(-2*zeta*wnh);
pmfd=roots([1 p1 p2]);

% obtenção do vetor de ganhos da realimentação
L = acker(phi,gama,pmfd);
phic=phi-gama*L; % phi close loop
pmf=eig(phic); % confirmação dos polos de malha fechada
ganhoDC=1; % ganho Dc desejado
Lc=ganhoDC/(C*inv(eye(2)-phic)*gama);

%% b)
clc;close all;

% dinamica desejada continua em malha fechada
wn = 20;
zeta = 1;
h = 0.03; %sampling time

% obtenção dos polos equivalentes discretos de malha fechada
wnh=wn*h; 
p1=-2*exp(-zeta*wnh)*cos(wnh*sqrt(1-zeta^2));
p2= exp(-2*zeta*wnh);
pmfd=roots([1 p1 p2]);

% obtenção do vetor de ganhos da realimentação
L = acker(phi,gama,pmfd);
phic=phi-gama*L; % phi close loop
pmf=eig(phic); % confirmação dos polos de malha fechada
ganhoDC=1; % ganho Dc desejado
Lc=ganhoDC/(C*inv(eye(2)-phic)*gama);

t_simulation=6;
out = sim('parte3_ex1.slx',t_simulation);
t_out = out.tout; data1 = out.ScopeData1.signals; data2 = out.ScopeData2.signals; data3 = out.ScopeData3.signals;
fig = figure;
plot(t_out,data1(1).values,'r',t_out,data1(2).values,'b',t_out,data1(3).values,'--g','LineWidth',1);
grid on;
xlabel('time');
ylim padded;
legend(data1(:).label,'Location','southwest');
title(sprintf('Respostas do Sistema sem ação integral \npara wn = %d',wn))

fig1 = figure;
plot(t_out,data3(1).values,'r',t_out,data3(2).values,'--b','LineWidth',1);
grid on;
xlabel('time');
ylim padded;
legend(data3(:).label,'Location','southwest');
title(sprintf('Respostas do Sistema sem ação integral \npara wn = %d',wn))

fig2 = figure;
plot(t_out,data2(1).values,'r',t_out,data2(2).values,'--b','LineWidth',1);
grid on;
xlabel('time');
ylim padded;
legend(data2(:).label,'Location','southwest');
title(sprintf('Respostas do Sistema sem ação integral \npara wn = %d',wn))

print(fig,sprintf('Results/ex1_b_1'),'-dpng');
print(fig1,sprintf('Results/ex1_b_2'),'-dpng');
print(fig2,sprintf('Results/ex1_b_3'),'-dpng');
close all;

%% c)
clc; close all;
t_simulation=6;
zeta = 1;

%variação do h para observar os resultados
for h = 0.01:0.02:0.05
    %variação do wn para observar os resultados
    for wn= 10:10:50    
        % obtenção dos polos equivalentes discretos de malha fechada
        wnh=wn*h; 
        p1=-2*exp(-zeta*wnh)*cos(wnh*sqrt(1-zeta^2));
        p2= exp(-2*zeta*wnh);
        pmfd=roots([1 p1 p2]);
        
        % obtenção do vetor de ganhos da realimentação
        L = acker(phi,gama,pmfd);
        phic=phi-gama*L; % phi close loop
        pmf=eig(phic); % confirmação dos polos de malha fechada
        ganhoDC=1; % ganho Dc desejado
        Lc=ganhoDC/(C*inv(eye(2)-phic)*gama);
        
        out = sim('parte3_ex1.slx',t_simulation);
        t_out = out.tout; data1 = out.ScopeData1.signals; data2 = out.ScopeData2.signals; data3 = out.ScopeData3.signals;
        fig = figure;
        plot(t_out,data1(1).values,'r',t_out,data1(2).values,'b',t_out,data1(3).values,'--g','LineWidth',1);
        grid on;
        xlabel('time');
        ylim padded;
        legend(data1(:).label,'Location','southwest');
        title(sprintf('Respostas do Sistema sem ação integral \npara wn = %d, h= %.2f e wnh = %.1f',wn,h,wnh))
        
        fig1 = figure;
        plot(t_out,data3(1).values,'r',t_out,data3(2).values,'--b','LineWidth',1);
        grid on;
        xlabel('time');
        ylim padded;
        legend(data3(:).label,'Location','southwest');
        title(sprintf('Respostas do Sistema sem ação integral \npara wn = %d, h= %.2f e wnh = %.1f',wn,h,wnh))
        
        fig2 = figure;
        plot(t_out,data2(1).values,'r',t_out,data2(2).values,'b','LineWidth',1);
        grid on;
        xlabel('time');
        ylim padded;
        legend(data2(:).label,'Location','southwest');
        title(sprintf('Respostas do Sistema sem ação integral \npara wn = %d, h= %.2f e wnh = %.1f',wn,h,wnh))
        
        print(fig,sprintf('Results/ex1_c_h_%d_wn_%d_1',uint16(h*1000),wn),'-dpng');
        print(fig1,sprintf('Results/ex1_c_h_%d_wn_%d_2',uint16(h*1000),wn),'-dpng');
        print(fig2,sprintf('Results/ex1_c_h_%d_wn_%d_3',uint16(h*1000),wn),'-dpng');
        close all;
    end
end

%% ex 2)
close all;clc;
t_simulation=6;

% obtenção do modelo do motor em espaços de estados aumentado
phi_a=[1 -C; [0;0] phi];
gama_a=[0;gama];

% dinamica desejada continua em malha fechada
wn = 20;
zeta = 1;
h = 0.03; 

% variação do polo integrador discreto para observar os resultados
for polo_i = 0.1:0.1:0.8
    % obtenção dos polos equivalentes discretos de malha fechada
    wnh=wn*h; 
    p1=-2*exp(-zeta*wnh)*cos(wnh*sqrt(1-zeta^2));
    p2= exp(-2*zeta*wnh);
    pmfd=roots([1 p1 p2]);
    
    % obtenção do vetor de ganhos da realimentação aumentado
    Laa = acker(phi_a,gama_a,[pmfd;polo_i]);
    
    
    phic=phi_a-gama_a*Laa; % phi aumentado close loop
    pmf=eig(phic); % confirmação dos polos de malha fechada aumentado
    L1 = -Laa(1);
    L = Laa(2:end);
    Lc = L1/(1-polo_i);

    out = sim('parte3_ex2.slx',t_simulation);
    t_out = out.tout; data1 = out.ScopeData1.signals; data2 = out.ScopeData2.signals;
    fig = figure;
    plot(t_out,data1(1).values,'r',t_out,data1(2).values,'b',t_out,data1(3).values,'--g','LineWidth',1);
    grid on;
    xlabel('time');
    ylim padded;
    legend(data1(:).label,'Location','southwest');
    title(sprintf('Respostas do Sistema com ação integral \npara p_i = %.1f',polo_i))
    
    fig1 = figure;
    plot(t_out,data2(1).values,'r',t_out,data2(2).values,'b','LineWidth',1);
    grid on;
    xlabel('time');
    ylim padded;
    legend(data2(:).label,'Location','southwest');
    title(sprintf('Respostas do Sistema com ação integral \npara p_i = %.1f',polo_i))
    print(fig,sprintf('Results/ex2_p_%d_1',uint16(polo_i*10)),'-dpng');
    print(fig1,sprintf('Results/ex2_p_%d_2',uint16(polo_i*10)),'-dpng');
    close all;
end
