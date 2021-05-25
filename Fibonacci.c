#include<stdio.h>

int fibo(int);

int main()
{
    int num,res;
    printf("\n Enter any num : ");
    scanf("%d",&num);
    fibo(num);

}

int fibo(int x)
{
    int i,a=0,b=1,c=0;
    for(i=1;i<=x;i++)
    {
        printf("  %d",c);
        a = b;
        b = c;
        c = a+b;
    }
}