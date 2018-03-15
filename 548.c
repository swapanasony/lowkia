#include <stdio.h>
int main(void)
{
int temp1,a,temp,count=0;
printf("\nEnter the num : ");
scanf("%d",&a);
temp1=a;
while(a!=0)
{
temp=a%10;
count++;
a=a/10;
}
printf("\nThe num of digits in %d is %d.",temp1,count);
return 0;
}
