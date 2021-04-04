fs = 100; %sampling frequency
dt = 1/fs; %sample step
StopTime = 1; %seconds
t = (0:dt:StopTime)'; %seconds
F = 2; %Sine wave frequency (Hz)
wave = sin(2*pi*F*t);


subplot(2,1,1)
%plot(t,wave)
stem(t,wave)
