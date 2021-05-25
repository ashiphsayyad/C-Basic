#include<stdio.h>

void Table(int);

int main()
{
     int num;
    printf("\n Enter any num : ");
    scanf("%d",&num);
    Table(num);
    
}

void Table(int x)
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("\n%d * %d = %d",x,i,x*i);
    }
}