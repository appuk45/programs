#include <stdio.h>
struct employee
{
    char name[50];
    int empid;
    int salary;
}emp[100];
int main()
{
    int i,n;
    printf("Enter the number of employees : ");
    scanf("%d",&n);
    printf("Enter the data of employees...\n");
    for(i=0;i<n;i++)
    {
        printf("Enter name : ");
        scanf("%s",&emp[i].name);
        printf("Enter employee ID : ");
        scanf("%d",&emp[i].empid);
        printf("Enter salary : ");
        scanf("%d",&emp[i].salary);
    }
    printf("\nDisplaying the datas....\n");
    for(i=0;i<n;i++)
    {
        printf("\nName : ");
        puts(emp[i].name);
        printf("Employee ID : ");
        printf("%d\n",emp[i].empid);
        printf("Salary : ");
        printf("%d",emp[i].salary);
        printf("\n");
    }
    return 0;
}