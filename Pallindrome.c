#include<stdio.h>
int pallindrome(int);

void main()
{
    int num,res;
    printf("Enter Any Number : ");
    scanf("%d",&num);

    res = pallindrome(num);
    if(res==1)
    printf("%d is pallindrome number",num);
    else
    printf("%d is not a pallindrome number",num);
}

int pallindrome(int x)
{
    int rem,sum=0;
    int n = x;
    while(n>0)
    {
        rem = n % 10;
        n = n/10;
        sum = (sum * 10) + rem ;
    }
    if (x==sum)
    return 1;
}