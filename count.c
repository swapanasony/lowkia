#include<stdio.h>
int main()
{
int a[300],t[300],n,i,j,count;
printf("\nEnter the values of the array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
t[i]=-1;
}
for(i=0;i<n;i++)
{
count=1;
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
count=count+1;
t[j]=0;
}
}
if(t[i] != 0)
{
t[i] = count;
}
}
printf("\nThe unique ele are : ");
for(i=0;i<n;i++)
{
if(t[i]==1)
{
printf("\n%d",a[i]);
}
}
return 0;
}
