#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers :\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2)
     {
         if (num1>num3)
          {
             printf("%d is the largest number ",num1);
          }
         else
          printf("%d is the largest numeber",num3);
         
     }
    else
     {
         if(num2>num3)
          {
             printf("%d is the largest numeber",num2);
          }
         else
          {
              printf("%d is the largest numeber",num3);
          }
     }   
    return 0; 
}