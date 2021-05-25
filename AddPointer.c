#include<stdio.h>
void AddMul(int *,int *);
void main()
{
    int a,b;
    printf("enter Two values");
    scanf("%d %d",&a,&b);
    AddMul(&a,&b);
    printf("\n\n%d + %d = %d",a,b,a+b);
    printf("\n\n%d * %d = %d",a,b,a*b);
    
}

void AddMul(int *x,int *y)
{
    *x + *y;
    *x * *y;
}