function [y,n] = sigscale(x,m,k)
n = [];
y = [];
for i = 1:length(m)
  if mod(m(i),k) == 0
    y = [y,x(i)];
    n = [n,m(i)/k];
  end
end