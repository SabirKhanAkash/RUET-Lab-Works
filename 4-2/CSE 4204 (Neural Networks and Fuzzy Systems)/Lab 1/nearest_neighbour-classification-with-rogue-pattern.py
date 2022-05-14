import matplotlib.pyplot as plt
import math

football_height=[189];
football_weight=[85];
wwe_height=[220];
wwe_weight=[120];

temp_f_dist = [];
temp_w_dist = [];

count = 1;

def avg(arr):
    for i in range(len(arr)):
        sum = sum + arr[i];
    print((sum/(len(arr))));
    return (sum/(len(arr)));

while(1):
    for i in range(True):

        in_height = int(input("Player Height: "));
        in_weight = int(input("Player Weight: "));
        count = count + 1;

        if(i>0):
            for j in range(count):
                temp_f_dist.append(math.sqrt(((abs(in_height-football_height[j])*abs(in_height-football_height[j]))+(abs(in_weight-football_weight[j])*abs(in_weight-football_weight[j])))))
                temp_w_dist.append(math.sqrt(((abs(in_height-wwe_height[j])*abs(in_height-wwe_height[j]))+(abs(in_weight-wwe_weight[j])*abs(in_weight-wwe_weight[j])))))

            a = float(avg(temp_f_dist));
            b = float(avg(temp_w_dist));
        elif(i==0):
            a = math.sqrt(((abs(in_height-football_height[0])*abs(in_height-football_height[0]))+(abs(in_weight-football_weight[0])*abs(in_weight-football_weight[0]))))
            b = math.sqrt(((abs(in_height-wwe_height[0])*abs(in_height-wwe_height[0]))+(abs(in_weight-wwe_weight[0])*abs(in_weight-wwe_weight[0]))))

        if(a<b):
            football_height.append(in_height);
            football_weight.append(in_weight);

        else:
            wwe_height.append(in_height);
            wwe_weight.append(in_weight);


    plt.scatter(football_height,football_weight,label="Football Players",color="green",marker=".",s=100);
    plt.scatter(wwe_height,wwe_weight,label="WWE Players",color="red",marker="*",s=100);
    plt.xlabel("Player's Height");
    plt.ylabel("Player's Weight");
    plt.title('Nearest Neighbour Classification with Rogue Pattern');
    plt.legend();

    plt.show();
