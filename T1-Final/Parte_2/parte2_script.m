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

% contante encoders
EncCov = 2*pi /1336;

Kp = 0.0271;
Ki = 0.2712;
t_simulation = 6;
h = 0.03; % sampling time