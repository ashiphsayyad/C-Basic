#include<stdio.h>

int prime(int);

int main()
{
    int num,res;
    printf("\n Enter any num : ");
    scanf("%d",&num);
    res = prime(num);
    if(res == 1)
    printf("%d is prime Number",num);
    else
    printf("%d is Not a prime Number",num);

}

int prime(int x)
{
    int i,count=0;
    for(i=1;i<x;i++)
    {
        if(x%i==0)
        count++;
    }
    if(count==1)
    return 1;
    else
    return 0;
}