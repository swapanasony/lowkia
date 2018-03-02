#include <stdio.h>
int main(void)
{
	int x,y,lcm=1,min,max,i,res;
	printf("\nEnter the first num : ");
	scanf("%d",&x);
	printf("\nEnter the second num : ");
	scanf("%d",&y);
	min=(x<y)?x:y;
	max=(x>y)?x:y;
	for(i=2;i<=min;i++)
	{
		if(x%i==0&&y%i==0)
		{
			lcm=i;
		}
	}
	res=(x*y)/lcm;
	printf("\nThe smallest divisor od %d and %d is %d.",x,y,res);
	return 0;
}
