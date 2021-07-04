function [pred11] = temp_grad_CALIC(Data1,Data2)


Data1=double(Data1);
Data2=double(Data2);
fit=polyfit(Data1,Data2,1);




[row,col]=size(Data1);
pred1=zeros(row-1,col-1);
% D=abs(Data1-Data2);

T=50;

for i=1:row-1
    for j=1:col-1
        data2h=Data2(i+1,j)+fit(1)*(Data1(i+1,j+1)-Data1(i+1,j));
        data2v=Data2(i,j+1)+fit(1)*(Data1(i+1,j+1)-Data1(i,j+1));
        if((abs(Data1(i+1,j+1)-Data1(i,j+1))-abs(Data1(i+1,j+1)-Data1(i+1,j)))>=T)
        pred1(i,j)=data2h;
        elseif((abs(Data1(i+1,j+1)-Data1(i,j+1))-abs(Data1(i+1,j+1)-Data1(i+1,j)))<=-T)
        pred1(i,j)=data2v;
        else
        pred1(i,j)=(data2h+data2v)*0.5;            
        end
    end
end

pred11=zeros(row,col);

pred11(1,:)=Data1(1,:)*fit(1)+fit(2);
pred11(2:row,1)=Data1(2:row,1)*fit(1)+fit(2);
pred11(2:row,2:col)=pred1;
pred11=int64(pred11);
pred11=double(pred11);