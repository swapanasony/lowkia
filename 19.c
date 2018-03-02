#include <stdio.h>
int main(void)
{
	int s,i,j,flag=0;
	printf("\nEnter the number : ");
	scanf("%d",&s);
	for(i=2;i<=s-1;i++)
	{
		if(s%i==0)
		{
		    flag=0;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					flag=1;
				}
			}
			if(flag==0)
			{
				printf("%d\t",i);
			}
		}
	}
	return 0;
}
