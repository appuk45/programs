#include <stdio.h>
int n;
struct process{
    int id,at,bt,completed,priority,rt;
}p[10];
int main()
{
    int completiontime,i,smallest;
    int count=0,time;
    float sumWait=0,sumTurnaround=0;
    printf("Enter no. of processes : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the arrival time of P%d : ",i+1);
        scanf("%d",&p[i].at);
        printf("Enter the burst time of P%d : ",i+1);
        scanf("%d",&p[i].bt);
        printf("Enter the priority of P%d : ",i+1);
        scanf("%d",&p[i].priority);
        p[i].rt=p[i].bt;
        p[i].completed=0;
        p[i].id=i+1;
    }
    time=0;
    printf("\nPid\tAT\tPrio\tBT\tCT\tTAT\tWT");
    int temp,maxPrio;
    while(count!=n){
        for(i=0;i<n;i++){
            if(p[i].at<=time && p[i].completed==0){
                maxPrio=p[i].priority;
                break;
            }
        }
        for(i=0;i<n;i++){
            if(p[i].at<=time && p[i].priority<=maxPrio && p[i].completed==0){
                maxPrio=p[i].priority;
                smallest=i;
            }
        }
        if(p[smallest].at>=time)
            p[smallest].rt += (p[smallest].at-time);
        time += p[smallest].rt;
        p[smallest].rt -= p[smallest].rt;
        p[smallest].completed=1;
        if(p[smallest].rt==0){
            count++;
            completiontime = time;
            sumWait += (completiontime-p[smallest].at-p[smallest].bt);
            sumTurnaround += (completiontime-p[smallest].at);
            printf("\nP%d\t%d\t%d\t%d\t%d\t%d\t%d\t",p[smallest].id,p[smallest].at,p[smallest].priority,p[smallest].bt,completiontime,completiontime-p[smallest].at,completiontime-p[smallest].at-p[smallest].bt);
        }
    }
    printf("\nAvg Wt=%.2f \nAvg Tat=%.2f \n",sumWait/n,sumTurnaround/n);
}