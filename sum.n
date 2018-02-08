#include<stdio.h>
int main()
{
	int a,num,sum=0;
	printf("enter the num");
	scanf("%d",&num);
	while(num>0)
	{
		a=num%10;
		num=num/10;
		sum=sum+a;
	}
	printf("\n%d",sum);
	return 0;
}
