%% Startup
clear;clc;close all;
%run('../startup'); % adição da path para usar a libraria para comunicar com o motor 

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

% contante encoders
EncCov = 2*pi /1336;

%% Ex 1)
clc; close all;
Kp = 0.0271;
Ki = 0.2712;
t_simulation = 6;
h = 0.03; % sampling time

titles ={{'continuo','carga'}; {'discreto','carga'};{'continuo','entrada'}; {'discreto','entrada'}};
% ficheiro dos varios modelos simulinks para as simulações
files = {'parte1_pert_carga_cont.slx', 'parte1_pert_carga_discrete.slx', 'parte1_pert_entrada_cont.slx', 'parte1_pert_entrada_discrete.slx'};

for i=1:4
    out = sim(files{i},t_simulation);
    t_out = out.tout; data1 = out.ScopeData.signals; data2 = out.ScopeData1.signals;
    
    fig = figure;
    plot(t_out,data1(1).values,'--r',t_out,data1(2).values,'b',t_out ,data1(3).values,'g', 'LineWidth',1);
    grid on;
    xlabel('time');
    ylim padded;
    title(sprintf('Resposta do Sistema %s com pertubação na %s',titles{i}{1},titles{i}{2}))
    legend(data1(:).label,'Location','southwest');

    fig1 = figure;
    plot(t_out,data2(1).values,'r',t_out,data2(2).values,'b', 'LineWidth',1);
    grid on;
    xlabel('time');
    ylim padded;
    title(sprintf('Resposta do Sistema %s com pertubação na %s',titles{i}{1},titles{i}{2}))
    legend(data2(:).label,'Location','northwest');
    print(fig,sprintf('Results/ex1_%s_%s_1',titles{i}{1},titles{i}{2}),'-dpng');
    print(fig1,sprintf('Results/ex1_%s_%s_2',titles{i}{1},titles{i}{2}),'-dpng');
    close all;
end


%% Ex 2)
clc; close all;
% obtenção das caracteristicas iniciais do sistema continuo para analise
Kp = 0.0271;
Ki = 0.2712;
wn = sqrt(K1*Ki)                    % ~= 20 rad/s
zeta = (alfa+K1*Kp)/(2*wn)          % ~= 1.6074
polos = roots([1 (2*zeta*wn) wn^2]) % s ~= -57.3169 e s ~= -6.9789

titles ={{'continuo','entrada'}; {'discreto','entrada'}};
files = {'parte1_pert_entrada_cont.slx', 'parte1_pert_entrada_discrete.slx'};

%variação do h para observar os resultados
for h = 0.01:0.02:0.03
    %variação do wn para observar os resultados
    for wn= 10:10:40
        %c alculo dos novos ganhos do controlador mantendo o zeta igual
        Kp = (2*zeta*wn -alfa)/K1;
        Ki = wn^2 / K1;
        wnh = wn*h;
        for i=1:2
            out = sim(files{i},t_simulation);
            t_out = out.tout; data1 = out.ScopeData.signals; data2 = out.ScopeData1.signals;
            
            fig = figure;
            plot(t_out,data1(1).values,'--r',t_out,data1(2).values,'b',t_out ,data1(3).values,'g', 'LineWidth',1);
            grid on;
            xlabel('time');
            ylim padded;
            if i == 1
                title(sprintf('Resposta do Sistema %s com pertubação na %s \npara wn = %d',titles{i}{1},titles{i}{2},wn))
            else
                title(sprintf('Resposta do Sistema %s com pertubação na %s \npara h = %.2f, wn = %d e wnh = %.1f',titles{i}{1},titles{i}{2},h,wn,wnh))    
            end
            legend(data1(:).label,'Location','southwest');
        
            fig1 = figure;
            plot(t_out,data2(1).values,'r',t_out,data2(2).values,'b', 'LineWidth',1);
            grid on;
            xlabel('time');
            ylim padded;
            legend(data2(:).label,'Location','northwest');
            if i == 1
                title(sprintf('Resposta do Sistema %s com pertubação na %s \npara wn = %d',titles{i}{1},titles{i}{2},wn))
                print(fig,sprintf('Results/ex2_%s_%s_wn_%d_1',titles{i}{1},titles{i}{2},wn),'-dpng');
                print(fig1,sprintf('Results/ex2_%s_%s_wn_%d_2',titles{i}{1},titles{i}{2},wn),'-dpng');
            else
                title(sprintf('Resposta do Sistema %s com pertubação na %s \npara h = %.2f, wn = %d e wnh = %.1f',titles{i}{1},titles{i}{2},h,wn,wnh))   
                print(fig,sprintf('Results/ex2_%s_%s_h_%d_wn_%d_1',titles{i}{1},titles{i}{2},h*1000,wn),'-dpng');
                print(fig1,sprintf('Results/ex2_%s_%s_h_%d_wn_%d_2',titles{i}{1},titles{i}{2},h*1000,wn),'-dpng');
            end
            close all;
        end
    end
end