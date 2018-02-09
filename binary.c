#include<stdio.h>
void main()
{
char n[10],i,count=0;
printf("enter the number");
scanf("%s",&n);
for(i=0;n[i]!='\0';i++)
{
if(!(n[i]==(0||1)))
{
count++;
}
}
if(count==0)
{
printf("the number is binary");
}
else
{
printf("the number is not a binary");
}
}
