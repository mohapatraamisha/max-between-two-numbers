#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("The maximum between two numbers is %d.",a);
		
	}
	else
	{
		printf("The maximum between the two numbers is %d.",b);
	}
	return 0;
}
    