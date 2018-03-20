#include<stdio.h>
int main()
{
int n,k,a[10],count=0,i;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
{
count++;
}
}
printf("number repeated %d times",count);
}
