#include<stdio.h>
void main()
{
int n,l,r;
printf("enter the num");
scanf("%d",&n);
printf("enter the left and right limit");
scanf("%d%d",&l,&r);
if((n>l)&&(n<r))
{
printf("yes");
}
else
{
printf("no");
}
}
