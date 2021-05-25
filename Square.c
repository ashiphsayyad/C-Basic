#include<stdio.h>

int sqr(int);

int main()
{
    int num,res;
    printf("\n Enter any num : ");
    scanf("%d",&num);
    res = sqr(num);
    printf("Square of %d is %d",num,res);

}

int sqr(int x)
{
    return x * x;
}