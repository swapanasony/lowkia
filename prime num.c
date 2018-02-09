#include<stdio.h>
void main()
{
int S ,i,count=0;
scanf("%d",&S);
for(i=1;i<=S;i++)
{
if((S%i)==0)
{
count++;
}
}
if(count==0)
{
printf("prime number");
}
else
{
printf("not a prime number");
}
}
