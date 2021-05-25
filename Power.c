#include<stdio.h>

int Power(int ,int);

int main()
{
    int base,index,res;
    printf("\n Enter Base and index : ");
    scanf("%d %d",&base,&index);
    res = Power(base,index);
    printf("%d raised to %d is %d",base,index,res);
    
    
}

int Power(int x,int y)
{
    int ans=1;
    while(y>0)
    {
        ans = ans * x;
        y--;
    }
    return ans;
}