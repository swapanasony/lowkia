#include<stdio.h>
void main()
{
int a[10],i=0;
printf("enter the digit");
scanf("%s",&a);
while(isdigit(a[i]))
{
if((a[i]%2)!=0)
{
printf("%d\t",a[i]);
}
i++;
}
}
