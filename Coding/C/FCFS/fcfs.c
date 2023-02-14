#include <stdio.h>
struct program
{
    int id,at,bt,ct,tat,wt;
}p[100],temp;
int main()
{
    int i,j,n;
    float total_tat=0.0,total_wt=0.0,avg_tat,avg_wt;
    printf("Enter the total no. of processes : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter AT of P%d : ",i+1);
        scanf("%d",&p[i].at);
        printf("Enter BT of P%d : ",i+1);
        scanf("%d",&p[i].bt);
        p[i].id=i+1;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(p[j].at>p[j+1].at)
            {
                temp=p[j+1];
                p[j+1]=p[j];
                p[j]=temp;
            }
        }
    }
    p[0].ct=p[0].bt;
    p[0].tat=p[0].ct-p[0].at;
    p[0].wt=p[0].tat-p[0].bt;
    total_tat=total_tat+p[0].tat;
    total_wt=total_wt+p[0].wt;
    for(i=1;i<n;i++)
    {
        p[i].ct=p[i-1].ct+p[i].bt;
        p[i].tat=p[i].ct-p[i].at;
        p[i].wt=p[i].tat-p[i].bt;
        total_tat=total_tat+p[i].tat;
        total_wt=total_wt+p[i].wt;
    }
    avg_tat=total_tat/n;
    avg_wt=total_wt/n;
    printf("Process\tAT\tBT\tCT\tTAT\tWT\t\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n",p[i].id,p[i].at,p[i].bt,p[i].ct,p[i].tat,p[i].wt);
    }
    printf("Avg TAT = %f\nAvg WT = %f",avg_tat,avg_wt);
    return 0;
}