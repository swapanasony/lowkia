#include <stdio.h>
int main(void)
{
	char x[500]="sunday",y[500],z[500]="saturday";
	int i,c3=0,c1,c2=0;
	printf("\nEnter the day..");
	scanf("%s",&y);
	c1=strlen(y);
	for(i=0;y[i]!='\0';i++)
	{
	        if(x[i]==y[i])
		{
			if(i==0)
			{
				c3++;
				c2++;
			}
			else
			{
				c3++;
			}
		}
		else if(z[i]==y[i])
		{
			c2++;
		}
	}
	if(c3==c1||c2==c1)
	{
		printf("\n%s is a Holiday",b);
	}
	else
	{
		printf("\n%s is a working day",b);
	}
	return 0;
}
