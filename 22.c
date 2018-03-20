#include <stdio.h>
int main(void) 
{
int a,b,n,min,i;
printf("\n Enter the first num : ");
scanf("%d",&a);
printf("\n Enter the second num : ");
scanf("%d",&b);
min=(a<b)?a:b;
if(a%b!=0)
{
printf("\n No common divisor between %d and %d.",a,b);
}
else
{
for(i=2;i<=min;i++)
{
if((a%i==0)&&(b%i==0))
{
n=i;
}
}
printf("\n The highest common divisor of %d and %d is %d.",a,b,n);
}
return 0;
}
