#include<stdio.h>
#include<string.h>
int main(void)
{
char s[300];
int i,a;
printf("\nEnter the string : ");
scanf("%[^\n]%*s",&s); 
a=strlen(s);
for(i=0;i<a;i++)
{
	if(s[i]==' ')
	{
		s[i+1]-=32;
	}
}
s[0]-=32;
printf("\nThe capitalized character is %s.",s);
return 0;
	
}
