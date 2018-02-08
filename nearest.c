#include <stdio.h>
int main()
{
  int x;
  scanf("%d",&x);
  if(x%2!=0)
  {
    printf("nearest even number is: %d",x-1);
  }
  else
  {
    printf("nearest even number is: %d",x-2);
  }
  }
