#include <stdio.h>
int main(void)
{
	int x[300],s,sum=0,i;
	printf("\nEnter the size of the array : ");
	scanf("%d",&s);
	printf("\nEnter the array elements : ");
	for(i=0;i<s;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<s;i++)
	{
		sum=sum+x[i];
	}
	printf("\nThe sum is %d.",sum);
	return 0;
}
