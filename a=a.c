#include <stdio.h>
int main(void)
{
	int a1,b1,i,sum=0,x;
	printf("\nEnter the initial value: ");
	scanf("%d",&a1);
	printf("\nEnter the difference: ");
	scanf("%d",&x);
	printf("\nEnter the end value: ");
	scanf("%d",&b1);
	for(i=a1;i<=b1;i=i+x)
	{
		sum+=i;
	}
	printf("\n%d\n",sum);
	return 0;
}
