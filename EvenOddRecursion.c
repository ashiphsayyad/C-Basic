#include<stdio.h>

void EvenOdd(int);
void main()
{
    int n;
    printf("Enter Any Number : ");
    scanf("%d",&n);
    EvenOdd(n);
}
void EvenOdd(int x)
{
    if(x!=0)
    {
        EvenOdd(x-1);
        if(x % 2 ==0)
        printf("\n%d Is Even Number",x);
        else
        printf("\n%d Is Odd Number",x);
      
    }
}
