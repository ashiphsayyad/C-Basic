#include<stdio.h>

char Convt(char);

int main()
{
    char ch,res;
    printf("\n Enter any char to convert : ");
    scanf("%c",&ch);
    res = Convt(ch);
    printf("%c is %c",ch,res);

}

char Convt(char x)
{
    if (x>='A' && x<='Z')
    return x + 32;
    if(x>='a' && x<='z')
    return x-32;
}