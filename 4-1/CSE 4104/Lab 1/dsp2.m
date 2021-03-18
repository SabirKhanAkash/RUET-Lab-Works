fs = 20; %sampling frequency
dt = 1/fs; %sample step
StopTime = 1; %seconds
t = (0:dt:StopTime)'; %seconds
F = 5; %Sine wave frequency (Hz)
wave1 = sin(2*pi*F*t);

fs = 10; %sampling frequency
dt = 1/fs; %sample step
StopTime = 1; %seconds
t = (0:dt:StopTime)'; %seconds
F = 5; %Sine wave frequency (Hz)
wave2 = sin(2*pi*F*t);

subplot(2,1,1)
plot(t,wave1)
%stem(t,wave1)

subplot(2,1,2)
plot(t,wave2)
%stem(t,wave2)
