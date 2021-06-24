im1 = imread("image/lena.jpg");

D=double(im1);
hist(D(:),[min(min(D)):max(max(D))]);
p = hist(D(:),[min(min(D)):max(max(D))]);
p(p==0) = [];
p = p ./ numel(D);
E = -sum(p.*log2(p))