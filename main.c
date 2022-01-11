#include<stdio.h>
void even_odd(int);
void positive_negative(int);
void even_odd(int a)
{
	if(a%2==0)
	{
		printf("%d is even",a);
	}
	else
	{
		printf("%d is odd",a);
	}
}
void positive_negative(int a)
{
	if(a>0)
	{
		printf("\n%d is positive",a);
	}
	else
	{
		printf("\n%d is negative",a);
	}
}
int main()
{
	int a;
	printf("number=");
	scanf("%d",&a);
	even_odd(a);
	positive_negative(a);
}