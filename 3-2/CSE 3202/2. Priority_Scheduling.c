/* 

Sample Testcase
5
2 4
1 5
5 2
9 3
1 1

*/

#include<stdio.h>
int main()
{
	int process,i,j,pos,temp,completionTime=0,turnaroundTime=0,waitTime=0;
	int bt[10],pr[10],pid[10];
	printf("**** Priority Scheduling ****\n\nEnter the number of processes: ");
	scanf("%d",&process);
	printf("\n");

	for(i=0; i<process; i++)
	{
		printf("Enter the burst time and priority for process %d :",i+1);
		scanf("%d%d",&bt[i],&pr[i]);
		pid[i] = i+1;
	}

	for(i=0;i<process;i++)
    {
        pos=i;
        for(j=i+1;j<process;j++)
        {
            if(pr[j]>pr[pos])
                pos=j;
        }
 
        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;
 
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
 
        temp=pid[i];
        pid[i]=pid[pos];
        pid[pos]=temp;
    }

    printf("\n--------------------------------------------");
    printf("\nProcess\t|  Turnaround Time  |  Waiting Time\n"); 
    printf("--------------------------------------------\n");
	
    for(i=0; i<process; i++) 
    { 
        if(bt[i] > 0) 
        { 
            completionTime+=bt[i];   
            printf("P%d\t|  \t%d ms\t    |  \t%d ms\n",pid[i],completionTime,completionTime-bt[i]); 
            waitTime += completionTime-bt[i]; 
            turnaroundTime += completionTime; 
        } 
    }

    printf("\nAverage Waiting Time= %.3f ms\n",waitTime*1.0/process); 
    printf("Average Turnaround Time = %.3f ms\n",turnaroundTime*1.0/process);
    
	return 0;
}