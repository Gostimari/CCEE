clear;clc;close all;

%parametros motor
Rm = 2.6;
Km = 0.00767;
Kg = 70;
mp = 0.126;
Lp = 0.33;
lp = Lp/2;
r = 0.22;
Jb = 0.0044;
g = 9.8;

qi = [0;pi/7];

h = 0.005;

% modelo linerar em tensão
A = [0 0 1 0
0 0 0 1
0 -(mp*r*g)/Jb -((Km*Kg)^2)/(Rm*Jb) 0
0 g*(Jb+mp*(r^2))/(lp*Jb) r*((Km*Kg)^2)/(Rm*Jb*lp) 0
];
B = [0;0;(Km*Kg)/(Rm*Jb);-r*(Km*Kg)/(Rm*lp*Jb)];
C =[1 0 0 0;0 1 0 0];
D = [0;0];

[phi,gama] = c2d(A,B,h);

%% dinamica desejada continua em malha fechada controlo em tensao
wn = 5;
zeta = 1;
wn*h
polos_n_domi = [0.5; 0.5];

% obtenção dos polos equivalentes discretos de malha fechada model em
% tensão
wnh=wn*h; 
p1=-2*exp(-zeta*wnh)*cos(wnh*sqrt(1-zeta^2));
p2= exp(-2*zeta*wnh);
pmfd=roots([1 p1 p2])

pmf = [pmfd; polos_n_domi];
L = acker(phi,gama,pmf)

%% controlo LQR
Q1 = [100 1000 0.1 1].*eye(4);
Q2=5;
L=dlqr(phi,gama,Q1,Q2)
% simulação
t = 10;

out=sim('modelo.slx',t);

Data4 = out.ScopeData4.signals;

figure;cla;
plot(out.ScopeData4.time,Data4(1).values*180/pi); hold on;
plot(out.ScopeData4.time,Data4(2).values*180/pi);
grid on;
xlabel('time (s)');
ylabel('Angle (degrees)');
legend('theta','alfa');

%% visualizacao do pendulo
obj = draw(qi);
tic
for i=1:size(Data4(1).values,1)
 q =[Data4(1).values(i) Data4(2).values(i)];
 update_draw(q,obj);
end
toc