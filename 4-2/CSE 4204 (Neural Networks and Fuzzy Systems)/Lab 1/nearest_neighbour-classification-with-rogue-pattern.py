import numpy as np
import matplotlib.pyplot as plt
import math
import random

football_group =np.array([[189, 85]]);
wwe_group =np.array([[220, 120]]);

def avg(arr):
    sum = 0
    for i in range(len(arr)):
        sum = sum + arr[i];
    return (sum/(len(arr)));

temp_f_dist = [];
temp_w_dist = [];

football_height = football_group[:,0];
football_weight = football_group[:,1];
wwe_height = wwe_group[:,0];
wwe_weight = wwe_group[:,1];

points = int(input("Total number of points: \n"))

for i in range(points):

    # in_height = int(input("Player Height: "));
    # in_weight = int(input("Player Weight: "));

    in_height = random.randint(175, 230);
    in_weight = random.randint(85, 150);
    print("\nPlayer Height: ",in_height)
    print("Player Weight: ",in_weight)
    print("\n")

    temp_f_dist = [];
    temp_w_dist = [];

    if(i>0):
        for j in range(len(football_group)):
            temp_f_dist.append(math.sqrt(((abs(in_height-football_group[j][0])*abs(in_height-football_group[j][0]))+(abs(in_weight-football_group[j][1])*abs(in_weight-football_group[j][1])))))
        for j in range(len(wwe_group)):
            temp_w_dist.append(math.sqrt(((abs(in_height-wwe_group[j][0])*abs(in_height-wwe_group[j][0]))+(abs(in_weight-wwe_group[j][1])*abs(in_weight-wwe_group[j][1])))))

        a = float(avg(temp_f_dist));
        b = float(avg(temp_w_dist));

    elif(i==0):
        a = math.sqrt(((abs(in_height-football_group[0][0])*abs(in_height-football_group[0][0]))+(abs(in_weight-football_group[0][1])*abs(in_weight-football_group[0][1]))))
        b = math.sqrt(((abs(in_height-wwe_group[0][0])*abs(in_height-wwe_group[0][0]))+(abs(in_weight-wwe_group[0][1])*abs(in_weight-wwe_group[0][1]))))

    inp_arr = np.array([[in_height, in_weight]]);

    if(a<b):
        football_group = np.append( football_group , inp_arr , axis=0 );
    else:
        wwe_group = np.append( wwe_group , inp_arr , axis=0 );

    football_height = football_group[:,0];
    football_weight = football_group[:,1];
    wwe_height = wwe_group[:,0];
    wwe_weight = wwe_group[:,1];


    plt.scatter(football_height,football_weight,label="Football Players",color="green",marker=".",s=100);
    plt.scatter(wwe_height,wwe_weight,label="WWE Players",color="red",marker="+",s=100);
    plt.xlabel("Player's Height");
    plt.ylabel("Player's Weight");
    plt.title('Nearest Neighbour Classification without Rogue Pattern');
    plt.legend();

    plt.show();
