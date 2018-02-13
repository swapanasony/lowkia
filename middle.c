#include<stdio.h>
void main()
{
char str[30];
int count=0,i=0,n;
printf("enter the string");
scanf("%s",&str);
while(str[i]!='\0')
{
count++;
}
if((count%2)==0)
{
n=count/2;
str[n]='*';
str[--n]='*';
}
else
{
n=count/2;
str[n]='*';
}
for(i=0;i<count;i++)
{
printf("%c",str[i]);
}
}

