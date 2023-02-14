#include <stdio.h>
struct student
{
    char name[50];
    char reg_num[10];
    char dept_name[100];
}s;
int main()
{
    printf("Enter the name of the student : ");
    scanf("%s",s.name);
    printf("Enter the register number : ");
    scanf("%s",s.reg_num);
    printf("Enter the department name : ");
    scanf("%s",s.dept_name);
    printf("\n\nName : %s\n",s.name);
    printf("Register number : %s\n",s.reg_num);
    printf("Department Name  : %s\n",s.dept_name);
    return 0;
}
