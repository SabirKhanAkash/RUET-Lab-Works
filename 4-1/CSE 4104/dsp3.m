FS = 10000;
dt = 1/FS;
StopTime = 1;
s_t = (0:dt:StopTime)';

F1 = 10;
st_wave1 = sin(2*pi*F1*s_t);
F2 = 5;
st_wave2 = sin(2*pi*F2*s_t);


fs = 8; %sampling frequency
dt = 1/fs; %sample step
StopTime = 1; %seconds
t = (0:dt:StopTime)'; %seconds
F = 10; %Sine wave frequency (Hz)
wave1 = sin(2*pi*F*t);

fs = 10; %sampling frequency
dt = 1/fs; %sample step
StopTime = 1; %seconds
t = (0:dt:StopTime)'; %seconds
F = 5; %Sine wave frequency (Hz)
wave2 = sin(2*pi*F*t);

subplot(2,2,1)
plot(s_t,st_wave1)

subplot(2,2,2)
plot(s_t,st_wave2)

subplot(2,2,3)
stem(t,wave1)

subplot(2,2,4)
stem(t,wave2)
