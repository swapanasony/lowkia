#include<stdio.h>
int main()
{
	int sum=0,s,temp;
	printf("\nEnter the number : ");
	scanf("%d",&s);
	while(s!=0)
	{
		temp=s%10;
		sum=sum+(temp*temp);
		s=s/10;
	}
	printf("\nThe square of the digit is %d",sum);
	return 0;
}
