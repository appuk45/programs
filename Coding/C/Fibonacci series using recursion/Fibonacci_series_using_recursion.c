#include <stdio.h>
int fibonacci(int n);
int main()
{
    int limit,i;
    printf("Enter limit : ");
    scanf("%d",&limit);
    printf("The fibinoacci series till %d is :\n", limit);
    for(i=0;i<=limit;i++)
        printf("%d\t",fibonacci(i));
    return 0;
}
int fibonacci(int n)
{
    if(n == 0)
      return 0;
    else if(n == 1)
      return 1;
    else
      return (fibonacci(n-1) + fibonacci(n-2));
}