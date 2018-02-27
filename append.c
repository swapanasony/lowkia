#include<stdio.h>
#include<string.h>
int main()
{
char string[10];
int l;
printf("enter string");
scanf("%[^\n]s",string);
l=strlen(string);
string[l]=46;
printf("%s",string);
return 0;
}
