close all;
clear all;
clc;

    c_F1 = 11;
    N = 1/100;
    
fs = 100;
sampling_step = 1/fs;
StopTime = 1;

c_t = (0:sampling_step:StopTime)';
x1 = @(t)exp(j*2*pi*C_F1*t)+.5;
y1 = x1(c_t);

figure(1);
plot(c_t,y1,'bo-','LineWidth',.5);
pause(2);
figure(2);

ax1 = subplot(2,1,1);
ax2 = subplot(2,1,2);
hold(ax2,'on');

for D_F = 0:.1:C_F1+3
    x = @(t)exp(-j*2*pi*D_F*t);
    y2 = x2(c_t);
    y = y1.*y2;
    r = real(y);
    i = imag(y);
    
    p = get(ax1,'pos');
    p(3) = p(4)+.04;
    plot(ax1,r,i,'b.-','LineWidth', .5);
    set(ax1,'pos',p);
    set(ax1, 'XLim', [-4 4]);
    set(ax1, 'YLim', [-4 4]);
    
    x3 = @(t)exp(-j*2*pi*D_F*t)+.5;
    y3 = x3(c_t);
    yy = y1.*y3;
    r = real(yy);
    i = imag(yy);
    x = sqrt(sum(r.*r+i.*i));
    
    mag = x/fs;
    stem(ax2,D_F,mag);
    
    clear y;
    clear r;
    clear mag;
    clear i;
    clear x;
    pause(.2);
end