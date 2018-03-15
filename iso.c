#include<stdio.h>
#include<string.h>
void main()
{
char s1[10],s2[10];
int i,j=0,flag=0,n;
printf("\nEnter 2 strings:");
scanf("%s%s",s1,s2);
n=strlen(s1);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(s1[i]==s2[j])
{
flag=1;
}
}
i++;
}
if(flag==0)
{
printf("\nYes");
}
else
{
printf("\nNo");
}
}
