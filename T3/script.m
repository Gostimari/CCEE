%% start
clc;close all;clear;
run('startup.m');

Rm = 14;
Kb = 0.1343;
Kt = 0.0948;
L = 0.045;
Mp = 0.296;
Mw = 0.032;
Rw = 0.022;
lp = 0;
lw = 0.5*Mw*Rw^2;
g = 9.81;
h = 0.03;
EncCov = 2*pi/1336;
GyroRad = pi*4.2386E-5;

a1 = lw + Rw*(Mp*(L+Rw)+Mw*Rw);
a2 = lw*(lp + L^2*Mp) + Rw^2*(lp*(Mp+Mw)+L^2*Mp*Mw);
a3 = lp + L*Mp*(L+Rw);

A = [
0 1 0 0
g*L*Mp*((Mp+Mw)*Rw^2+lw)/a2 -(a1*Kb*Kt)/(a2*Rm) 0 (a1*Kb*Kt)/(a2*Rm*Rw)
0 0 0 1
-(g*L^2*Mp^2*Rw^2)/a2 (a3*Kb*Kt*Rw)/(a2*Rm) 0 -(a3*Kb*Kt)/(a2*Rm)
];

B = [
  0
  -(a1*Kt)/(a2*Rm)
  0
  (a3*Kt*Rw)/(a2*Rm)
];

C = [
1 0 0 0
0 1 0 0
0 0 1 0
0 0 0 1
];
D = [
  0
  0
  0
  0
];
qi = [-0.17453 0 0 0]; % condições iniciais
[phi,gama] = c2d(A,B,h);

%% Calculo L
%Q1 = [800 0.1 500 0.005].*eye(4);
%Q2=1.5;
Q1 = [1000 0.5 500 0.005].*eye(4);
Q2=5;
L1=dlqr(phi,gama,Q1,Q2)
L2=L1.*[1 1 Rw Rw]
%%
sim('conrolo_lqr.slx',12);

%% 
save('run_3.mat','ScopeData1','ScopeData2','ScopeData3');