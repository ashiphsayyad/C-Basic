#include<stdio.h>

int Max(int ,int,int);

int main()
{
    int a,b,c,res;
    printf("\n Enter 3 numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    res = Max(a,b,c); 
    printf("Max number is %d",res);
    
    
}

int Max(int x,int y,int z)
{
    if(x>y && x>z)
    return x;
    else if(y>x && y>z)
    return y;
    else
    return z;

}