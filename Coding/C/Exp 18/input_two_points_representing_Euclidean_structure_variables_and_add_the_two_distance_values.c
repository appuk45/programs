#include <stdio.h>
#include <math.h>
struct distance
{
    float x;
    float y;
}point1,point2;
int main()
{
    float dist;
    printf("Enter the distance from x axis to point 1: ");
    scanf("%f",&point1.x);
    printf("Enter the distance from y axis to point 1: ");
    scanf("%f",&point1.y);
    printf("Enter the distance from x axis to point 2: ");
    scanf("%f",&point2.x);
    printf("Enter the distance from y axis to point 2: ");
    scanf("%f",&point2.y);
    dist=sqrt(pow((point1.x-point2.x),2)+pow((point1.y-point2.y),2));
    printf("The distance between two points is : %f", dist);
    return 0;
}