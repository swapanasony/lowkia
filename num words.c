#include<stdio.h>
void main()
{
char str[10];
int count,i;
printf("enter the string");
scanf("%s",&str);
for(i=0;str[i]!='\0';i++)
{
  if(str[i]==' ')
  {
count++;
  }
}
printf("number of words in a sentence is %d",++count);
}
