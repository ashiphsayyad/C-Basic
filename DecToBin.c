//Write a program in C to convert decimal number to binary number using the function.
#include<stdio.h>
int DecToBin(int);

void main()
{
    int n,res;
    printf("Enter Any number : ");
    scanf("%d",&n);

    res = DecToBin(n);
    printf("%d is %d in binary",n,res);

}

int DecToBin(int x)
{
    int rem,sum=0,f=1;
    while(x!=0)
    {
        rem = x % 2;
        x = x/2;
        sum = sum  + rem*f ;
        f = f*10;
    }
    return sum;
}