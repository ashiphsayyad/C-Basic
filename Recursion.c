#include<stdio.h>
void Func(int);

int main()
{
    int n;
    printf("Enter any Number : ");
    scanf("%d",&n);
    Func(n);
}

void Func(int x)
{
    if (x!=0)
    {  
        Func(x-1);
        printf("\n%d",x);
    }
    

}