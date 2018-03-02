#include <stdio.h>
int main()
{
   char a[30];
   int i,count=0;
   printf("enter the string");
   scanf("%d",&a);
   for(i=0;scanf[i]!='\0';i++)
   {
       a[i]=a[i]-48;
       if((a[i]>=0)&&(a[i]<=9))
       {
           count++;
       }
   }
   if(count==0)
   {
       printf("given is not a numeric ");
   }
   else
   {
       printf("given is a numeric");
   }


}
