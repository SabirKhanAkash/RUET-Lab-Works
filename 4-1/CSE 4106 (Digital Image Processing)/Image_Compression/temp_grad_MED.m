function [pred11] = temp_grad_MED(Data1,Data2)

Data1=double(Data1);
Data2=double(Data2);

[row,col]=size(Data1);
pred1=zeros(row-1,col-1);

D=abs(Data1-Data2);


for i=1:row-1
    for j=1:col-1    
        if(D(i,j)>=max(D(i,j+1),D(i+1,j)))
        pred1(i,j)=Data1(i+1,j+1)+min(D(i,j+1),D(i+1,j));
        elseif(D(i,j)<=min(D(i,j+1),D(i+1,j)))
        pred1(i,j)=Data1(i+1,j+1)+max(D(i,j+1),D(i+1,j));
        else
        pred1(i,j)=Data1(i+1,j+1)+(D(i,j+1)+D(i+1,j)-D(i,j));
        end
    end
end

pred11=zeros(row,col);

pred11(1,:)=Data2(1,:);
pred11(2:row,1)=Data2(2:row,1);
pred11(2:row,2:col)=pred1;
pred11=int64(pred11);
pred11=double(pred11);