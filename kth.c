#include <stdio.h>
#include<math.h>
int main()
{
int a[10],n,k,i;
printf("enter the no of ele and k-th ele want to be print");
scanf("%d%d",&n,&k);
printf("array ele");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("k-th ele is: %d",a[--k]);
return 0;
}

