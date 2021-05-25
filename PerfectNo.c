// Write a program in C to print all perfect numbers in given range using the function. 
#include<stdio.h>
int Perfect(int);
void Range(int ,int);

void main()
{
    int st,en;
    printf("Enter start and end Range : ");
    scanf("%d %d",&st,&en);
   
    printf("The perfect numbers between %d and %d are",st,en);
     Range(st,en);
    
}

int Perfect(int x)
{
    int i;
    
        int sum =0;    
        for(i=1;i<x;i++)
        {
            if (x%i==0)
            {
                sum = sum + i;
            }
        }
        if (i == sum)
             return 1;  
        else
            return 0;  
}

void Range(int start,int end)
{
    for(int i=start;i<end;i++)
    {
        if(Perfect(i))
        {
            printf("  %d",i);
        }

    }
}

/*void Range(int start,int end)
{
    while(start<end)
    {
        if(Perfect(start))
        {
             printf("  %d",start);
        }
        start++;
    }
    
}
*/