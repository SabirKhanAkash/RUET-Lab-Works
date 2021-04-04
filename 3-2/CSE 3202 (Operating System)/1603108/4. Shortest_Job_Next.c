/*

Sample Testcase
7
5 3
2 4
3 2
1 5
7 7
6 3
0 6

*/

#include<stdio.h>

void Shortest_Job_Next(int process, int at[], int bt[], int pid[])
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
    }

    for(i=1;i<=process;i++)
    {
        pos=i;
        for(j=i+1;j<process;j++)
        {
            if(bt[j]<bt[pos])
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
    }

    rem = process;

    printf("\n---------------------------------------------------------------------------------------------------");
    printf("\nProcess\t|    Arival Time    |  Burst Time   | Completion Time  |  Turnaround Time  |  Waiting Time\n"); 
    printf("---------------------------------------------------------------------------------------------------\n");

    completionTime = 0,i = 0;
    while(rem!=0) 
    { 
        if(bt[i] > 0) 
        { 
            completionTime+=bt[i]; 
            rem--; 
            printf("  P%d\t|  \t%d ms\t    |  \t%d ms\t    |  \t%d ms\t       |  \t%d ms\t   |  \t%d ms\n",pid[i],at[i],bt[i],completionTime,completionTime-at[i],completionTime-at[i]-bt[i]); 
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
    int at[1000],bt[1000],pid[1000];   
    printf("**** Shortest Job Next (Non-Preemptive) ****");
    printf("\n\nEnter the number of processes: ");
    scanf("%d",&process);
    printf("\n");

    for(i=0; i<process; i++)
    {
        printf("Enter the arival time and burst time for process %d :",i+1);
        scanf("%d%d",&at[i],&bt[i]);
        pid[i] = i+1;
    }

    Shortest_Job_Next(process,at,bt,pid);

    return 0;
}