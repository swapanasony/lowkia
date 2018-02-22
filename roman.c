#include<stdio.h>
#include<string.h>
int main()
{
	int i,sum=0,a[80],l,k;
	char r[30];
	printf("Enter the Roman number:");
	scanf("%s",r);
	l=strlen(r);
	for(i=0;i<l;i++)
	{
		switch(r[i])
		{
			case 'I':
				a[i]=1;
				break;
			case 'V':
				a[i]=5;
				break;
			case 'X':
				a[i]=10;
				break;
		}
	}
 k = a[l - 1];
   for(i = l - 1; i > 0; i--)
   {
      if(a[i] > a[i - 1])
      {
     k = k - a[i - 1];
      }
      if(a[i] <= a[i - 1])
      {
     k = k + a[i - 1];
      }
   }
   printf("decimal equivalent is %d", k);
	}
