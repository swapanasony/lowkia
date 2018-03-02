#include<stdio.h>
void main()
{
    int s,i,count=0;
scanf("%d",&s);
for(i=1;i<=s;i++)
{
if((s%i)==0)
{
count++;
}
}
if(count==0)
{
printf("no,not a composite");
}
else
{
printf("yes,composite");
}
}
