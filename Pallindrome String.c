
//Assignment 3 Strings from web portal
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int Pallindrome(char[]);

void main()
{
	char str[20],res;
	printf("Enter String to check pallindrome: ");
	gets(str);
	res = Pallindrome(str);

	if (res == 1)
		printf("String is Pallindrome!!!");
	else
		printf("String is not pallindrome");
}

int Pallindrome(char x[])
{
	int i,j,len,f=0;
	len = strlen(x);

	for (i = 0,j=len-1;i<=j; i++,j--)
	{
		
		if (x[i] == x[j])
			f = 1;
		else
			f = 0;
	}
	return f;
}