#include<stdio.h>

int main()
{
    int a, b, c, d, e, f, g;
    float sol;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("Enter the value of c : ");
    scanf("%d",&c); 
    printf("Enter the value of d : ");
    scanf("%d",&d);
    printf("Enter the value of e : ");
    scanf("%d",&e);
    printf("Enter the value of f : ");
    scanf("%d",&f);
    printf("Enter the value of g : ");
    scanf("%d",&g);
    sol=(a -b / c * d + e) * (f +g);
    printf("The  solution of ((a -b / c * d + e) * (f +g)) is : %f",sol);
    return 0;
    
} 