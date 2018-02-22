#include <stdio.h>
int main()
{
    int n, num= 0, rem;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while(n != 0)
    {
        rem= n%10;
        num = num*10 + rem;
        n /= 10;
    }
      printf("Reversed Num = %d", num);
return o;
  
}
