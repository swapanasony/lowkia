#include<stdio.h>
int main()
{
  int a,i,flag=0;
  printf("enter the number");
  scanf("%d",&a);
  printf("the factors are");
  for(i=1;i<=a;i++)
  {
  if(a%i==0)
  {
    printf("%d\t",i);
  }
  }
  return 0;
}
