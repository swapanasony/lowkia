#include <stdio.h>
int main(void) 
{
	int x,y,n;
	printf("\nEnter the two numbers: ");
	scanf("%d",&x);
	scanf("%d",&y);
	if(x>y)
	{
		n=x-y;
	}
	else
	{
		n=y-x;
	}
	if(n%2==0)
	{
		printf("\nThe difference is even.");
	}
	else
	{
		printf("\nThe difference is odd. ");
	}
	return 0;
}
