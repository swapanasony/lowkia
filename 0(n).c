#include<stdio.h>
int main()
{
int number,k,remark,l,r,count=0;
printf("Enter the initial value \n");
scanf("%d",&l);
printf("\nEnter the end value");
scanf("%d",&r);
for(number=l;number<=r;++numbr)
{
remark=0;
for(k=2;k<=number/2;k++)
{
if((number % k) == 0){
remark++;
break;
}
}
if(remark==0)
count++;
}
printf("The total prime values are...%d",count);
return 0;
}o(
