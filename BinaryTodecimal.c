#include<stdio.h>

int BtoD(int);
int power(int ,int);

int main()
{
    int num,res;
    printf("\n Enter any num : ");
    scanf("%d",&num);
    res = BtoD(num);
    printf("%d in decimal is %d",num,res);
    

}


int power(int bs,int ind)
{
    int i,result=1;
    for(i=1;i<=ind;i++)
    {
        result = result*bs;
    }
    return result;
}


int BtoD(int x)
{
    int a = x;
    int count=0;
    int rem,pow=0,sum=0;
    while(a>0)
    {
        rem = a % 10;
        a = a/10;
        pow = power(2,count++);
        sum = sum + (rem*pow);
    }
    return sum;
}