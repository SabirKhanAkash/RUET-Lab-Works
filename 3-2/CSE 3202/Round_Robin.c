#include<stdio.h> 
int main() 
{ 
    int i,process,completionTime,rem,flag=0,timeQuantum; 
    int waitTime=0,turnaroundTime=0,at[10],bt[10],rt[10]; 

    printf("Enter the number of processes : "); 
    scanf("%d",&process); 

    rem = process; 

    for(i=0; i<process; i++) 
    { 
        printf("Enter arival time and Burst time for Process %d (in ms):",i+1); 
        scanf("%d",&at[i]); 
        scanf("%d",&bt[i]); 
        rt[i] = bt[i]; 
    } 

    printf("Enter Time Quantum: "); 
    scanf("%d",&timeQuantum); 
    printf("\n\nProcess\t|  Turnaround Time  |  Waiting Time\n"); 
    printf("--------------------------------------------\n");

    completionTime = 0,i = 0;
    while(rem!=0) 
    { 
        if(rt[i] <= timeQuantum && rt[i] > 0) 
        { 
            completionTime+=rt[i]; 
            rt[i]=0; 
            flag=1; 
        } 
        else if(rt[i]>0) 
        { 
            rt[i] -= timeQuantum; 
            completionTime += timeQuantum; 
        } 
        if(rt[i]==0 && flag==1) 
        { 
            rem--; 
            printf("P%d\t|  \t%d ms\t    |  \t%d ms\n",i+1,completionTime-at[i],completionTime-at[i]-bt[i]); 
            waitTime += completionTime-at[i]-bt[i]; 
            turnaroundTime += completionTime-at[i]; 
            flag = 0; 
        } 

        if(i == process-1) 
            i = 0; 
        else if(at[i+1] <= completionTime) 
            i++; 
        else 
            i = 0; 
    }

    printf("\nAverage Waiting Time= %f ms\n",waitTime*1.0/process); 
    printf("Average Turnaround Time = %f ms\n",turnaroundTime*1.0/process); 

    return 0; 
}