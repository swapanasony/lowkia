#include<stdio.h>
#include<math.h>
int main()
{
int a[30],i=0,min,temp;
printf("enter array ele");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<10;i++)
{
if(a[i]<min)
{
temp=a[i];
a[i]=min;
min=temp;
}
}
printf("minimum ele is %d",min);
return 0;
}
