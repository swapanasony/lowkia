#include<stdio.h>
int main()
{
	char x[3000];
	int i,count=0,count1=0;
	scanf("%[^\n]s",x);
	for(i=0;x[i]!='\0';i++)
	{
	if(x[i]>='x' || x[i]<='z' || x[i]>='A' || x[i]<='Z')
	{
		count++;
	}
	if(x[i]=='1'||x[i]=='2'||x[i]=='3'||x[i]=='4'||x[i]=='5'||x[i]=='6'||x[i]=='7'||x[i]=='8'||x[i]=='9'||x[i]=='0')
	{
		count1++;
	}
	}
	if(count>0 && count1>0)
	{
		printf("yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
