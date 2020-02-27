/*

Sample Testcase
6
0 5 3
3 2 4
2 3 2
1 1 5
3 7 7
1 6 3

*/

#include<stdio.h>

void Priority_Scheduling(int process, int at[], int bt[], int pid[], int pr[])
{
    int completionTime=0,turnaroundTime=0,waitTime=0,flag=0;
    int i,pos,j,temp,rem;
    for(i=0;i<process;i++)
    {
        pos=i;
        for(j=i+1;j<process;j++)
        {
            if(at[j]<at[pos])
                pos=j;
        }
 
        temp=at[i];
        at[i]=at[pos];
        at[pos]=temp;
 
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
 
        temp=pid[i];
        pid[i]=pid[pos];
        pid[pos]=temp;

        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;        
    }

    rem = process;

    printf("\n--------------------------------------------");
    printf("\nProcess\t|  Turnaround Time  |  Waiting Time\n"); 
    printf("--------------------------------------------\n");

    completionTime = 0,i = 0;
    while(rem!=0) 
    { 
        if(bt[i] > 0) 
        { 
            completionTime+=bt[i]; 
            rem--; 
            printf("P%d\t|  \t%d ms\t    |  \t%d ms\n",pid[i],completionTime-at[i],completionTime-at[i]-bt[i]);
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

    printf("\nAverage Waiting Time= %.3f ms\n",waitTime*1.0/process); 
    printf("Average Turnaround Time = %.3f ms\n",turnaroundTime*1.0/process);
}


int main()
{
    int process,i;
    int at[1000],bt[1000],pid[1000],pr[1000];   
    printf("**** Priority Scheduling ****");
    printf("\n\nEnter the number of processes: ");
    scanf("%d",&process);
    printf("\n");

    for(i=0; i<process; i++)
    {
        printf("Enter the arival time and burst time and Priority for process %d :",i+1);
        scanf("%d%d%d",&at[i],&bt[i],&pr[i]);
        pid[i] = i+1;
    }

    Priority_Scheduling(process,at,bt,pid,pr);

    return 0;
}