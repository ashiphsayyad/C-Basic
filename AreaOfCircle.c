#include<stdio.h>
float AreaCircle(int);

int main()
{
    int num;
    float res;
    printf("\n Enter any num : ");
    scanf("%d",&num);
    res = AreaCircle(num);
    printf("Area of circle is %.2f ",res);
}

float AreaCircle(int x)
{
    return 3.14*x*x;
}