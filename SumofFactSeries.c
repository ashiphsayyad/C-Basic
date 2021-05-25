//Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function
#include<stdio.h>
int Fact (int);

int main()
{
    int res;
    res = Fact(1)/1 + Fact(2)/2 + Fact(3)/3 + Fact(4)/4 + Fact(5)/5;
    printf("The Sum of series is %d",res);

    return 0;
}

int Fact(int x)
{
    int i,fac=1;
    for(i=1;i<=x;i++)
    {
        fac = fac * i;
    }
    return fac;
}
