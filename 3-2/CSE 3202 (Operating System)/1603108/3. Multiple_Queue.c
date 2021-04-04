/* 

Sample Testcase
9
0 5 9
3 1 2
5 5 7
2 9 3
1 2 1
4 4 6
3 3 5
2 6 8
6 4 4
15

*/

#include<stdio.h>

int TotalQueueWaitTime = 0;
int TotalQueueTurnaroundTime = 0;

void Round_Robin(int process, int bt[1000], int rt[1000], int at[1000], int timeQuantum, int rpid[1000])
{
    int completionTime=0,turnaroundTime=0,waitTime=0,i,flag=0,rem;
    printf("\nIn QUEUE 1:");
    printf("\n--------------------------------------------");
    printf("\nProcess\t|  Turnaround Time  |  Waiting Time\n"); 
    printf("--------------------------------------------\n");

    rem = process;
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
            printf("P%d\t|  \t%d ms\t    |  \t%d ms\n",rpid[i],completionTime-at[i],completionTime-at[i]-bt[i]); 
            waitTime += completionTime-at[i]-bt[i]; 
            turnaroundTime += completionTime-at[i]; 
        } 

        if(i == process-1) 
            i = 0; 
        else if(at[i+1] <= completionTime) 
            i++; 
        else 
            i = 0; 
    }
    TotalQueueWaitTime += waitTime;
    TotalQueueTurnaroundTime += turnaroundTime;
    printf("\nAverage Waiting Time= %.3f ms\n",waitTime*1.0/process); 
    printf("Average Turnaround Time = %.3f ms\n",turnaroundTime*1.0/process); 
    printf("----------------------------------------------------\n");

}

void Priority_Scheduling(int process, int ppr[], int ps[], int ppid[],int pat[])
{
    
    int completionTime=0,turnaroundTime=0,waitTime=0,i = 0,j,pos,temp,rem,flag=0;
    for(i=0;i<process;i++)
    {
        pos=i;
        for(j=i+1;j<process;j++)
        {
            if(pat[j]<pat[pos])
                pos=j;
        }

        temp=pat[i];
        pat[i]=pat[pos];
        pat[pos]=temp;
 
        temp=ppr[i];
        ppr[i]=ppr[pos];
        ppr[pos]=temp;
 
        temp=ps[i];
        ps[i]=ps[pos];
        ps[pos]=temp;
 
        temp=ppid[i];
        ppid[i]=ppid[pos];
        ppid[pos]=temp;
    }

    printf("\n\nIn QUEUE 2:");
    printf("\n--------------------------------------------");
    printf("\nProcess\t|  Turnaround Time  |  Waiting Time\n"); 
    printf("--------------------------------------------\n");
    
    rem = process;
    completionTime = 0,i = 0;
    while(rem!=0) 
    { 
        if(ps[i] > 0) 
        { 
            completionTime+=ps[i]; 
            rem--; 
            printf("P%d\t|  \t%d ms\t    |  \t%d ms\n",ppid[i],completionTime,completionTime-ps[i]);
            waitTime += completionTime-pat[i]-ps[i]; 
            turnaroundTime += completionTime-pat[i]; 
            flag = 0; 
        } 
        if(i == process-1) 
            i = 0; 
        else if(pat[i+1] <= completionTime) 
            i++; 
        else 
            i = 0; 
    }

    TotalQueueWaitTime += waitTime;
    TotalQueueTurnaroundTime += turnaroundTime;

    printf("\nAverage Waiting Time= %.3f ms\n",waitTime*1.0/process); 
    printf("Average Turnaround Time = %.3f ms\n",turnaroundTime*1.0/process);
    printf("----------------------------------------------------\n");
}

void FCFS(int process, int fps[], int fppr[], int fppid[])
{
    int completionTime=0,turnaroundTime=0,waitTime=0,i = 0,j,pos,temp;
    printf("\n\nIn QUEUE 3:");
    printf("\n--------------------------------------------");
    printf("\nProcess\t|  Turnaround Time  |  Waiting Time\n"); 
    printf("--------------------------------------------\n");
    
    for(i=0; i<process; i++) 
    { 
        if(fps[i] > 0) 
        { 
            completionTime+=fps[i];   
            printf("P%d\t|  \t%d ms\t    |  \t%d ms\n",fppid[i],completionTime,completionTime-fps[i]); 
            waitTime += completionTime-fps[i]; 
            turnaroundTime += completionTime; 
        } 
    }

    TotalQueueWaitTime += waitTime;
    TotalQueueTurnaroundTime += turnaroundTime;

    printf("\nAverage Waiting Time= %.3f ms\n",waitTime*1.0/process); 
    printf("Average Turnaround Time = %.3f ms\n",turnaroundTime*1.0/process);
    printf("----------------------------------------------------\n");
}

int main()
{
    int process,timeQuantum,i,k=0,l=0,m=0;
    int at[10000],bt[10000],pr[10000],pid[10000];
    int fps[1000],fppr[1000],fppid[1000];
    int rat[10000],rr[10000],rpid[10000];
    int rrr[10000],ps[10000],ppr[10000],ppid[10000],pat[1000];

    printf("**** Multiple Queue ****\n\nSay, There are three queues Q1, Q2, Q3. \n");
    printf("Q1's processes (processes having priority > 5) will follow Round-Robin algorithm \n");
    printf("Q2's processes (processes having 3 <= priority <= 5) will follow Priority Scheduling algorithm \n");  
    printf("and Q3's processes (processes having 0 <= priority <=2) will follow FCFS algorithm.");  
    printf("\n\nEnter the number of processes: ");
    scanf("%d",&process);
    printf("\n");

    for(i=0; i<process; i++)
    {
        printf("Enter the arival time, burst time and priority for process %d :",i+1);
        scanf("%d%d%d",&at[i],&bt[i],&pr[i]);
        pid[i] = i+1;
        if(pr[i]>5)
        {
            rpid[k] = pid[i];
            rr[k] = bt[i];
            rrr[k] = rr[k];
            rat[k] = at[i];
            k++;
        }
        else if(pr[i]<=5 && pr[i]>=3)
        {
            pat[l] = at[i];
            ps[l] = bt[i];
            ppr[l] = pr[i];
            ppid[l] = pid[i];
            l++;
        }
        else if(pr[i]<3 && pr[i]>=0)
        {
            fps[m] = bt[i];
            fppr[m] = pr[i];
            fppid[m] = pid[i];
            m++;
        }
    }
    printf("\nEnter Time Quantum: "); 
    scanf("%d",&timeQuantum);

    Round_Robin(k,rr,rrr,rat,timeQuantum,rpid);
    Priority_Scheduling(l,ppr,ps,ppid,pat);
    FCFS(m,fps,fppr,fppid);

    printf("\nAverage Waiting Time for total queue = %.3f ms\n",TotalQueueWaitTime*1.0/process); 
    printf("Average Turnaround Time for total queue = %.3f ms\n",TotalQueueTurnaroundTime*1.0/process);

    return 0;
}