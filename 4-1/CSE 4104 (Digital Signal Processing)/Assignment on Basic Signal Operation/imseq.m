function [x,n] = imseq(k, lr, ur)
n=[lr:ur]
x = [(n-k)==0]