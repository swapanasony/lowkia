#include <stdio.h>
#include<math.h>
int main(void)
{
int n,m,s;
printf("\nEnter the number : ");
scanf("%d",&n);
printf("\nEnter the power : ");
scanf("%d",&m);
s=pow(n,m);
printf("\nThe result is %d .",s);
return 0;
}
