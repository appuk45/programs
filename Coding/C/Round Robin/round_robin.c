#include <stdio.h>
struct program
{
    int at,bt,ct,tat,wt;
}p[100],temp;
int main()
{
    int i,j,n,rt[100],ts,time,flag=0,remain;
    float total_tat=0.0,total_wt=0.0,avg_tat,avg_wt;
    printf("Enter the total no. of processes : ");
    scanf("%d",&n);
    remain=n;
    for(i=0;i<n;i++)
    {
        printf("Enter AT of P%d : ",i+1);
        scanf("%d",&p[i].at);
        printf("Enter BT of P%d : ",i+1);
        scanf("%d",&p[i].bt);
        rt[i]=p[i].bt;
    }
    printf("Enter the time slice : ");
    scanf("%d",&ts);
    printf("\nProcess\t\tAT\tBT\tTAT\tWT\t\n");
    for(time=0,i=0;remain!=0; )
    {
        if(rt[i]<=ts && rt[i]>0)
        {
            time=time+rt[i];
            rt[i]=0;
            flag=1;
        }
        else if(rt[i]>0)
        {
            rt[i]=rt[i]-ts;
            time=time+ts;
        }
        if(rt[i]==0 && flag==1)
        {
            remain--;
            printf("%d\t\t%d\t%d\t%d\t%d\n",i+1,p[i].at,p[i].bt,time-p[i].at,time-p[i].at-p[i].bt);
            total_tat=total_tat+time-p[i].at;
            total_wt=total_wt+time-p[i].at-p[i].bt;
            flag=0;
        }
        if(i==n-1)
            i=0;
        else if(p[i+1].at<=time)
            i++;
        else
            i=0;
    }
    avg_tat=total_tat/n;
    avg_wt=total_wt/n;
    printf("Avg TAT = %.2f\nAvg WT = %.2f",avg_tat,avg_wt);
    return 0;
}