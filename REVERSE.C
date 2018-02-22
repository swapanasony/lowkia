#include<stdio.h>
#include<string.h>
void main()
{
    char st[30000],st1[30000],j=0;
    int i;
    scanf("%s",st);
    for(i=strlen(st)-1;i>=0;i--)
    {
    st1[j]=st[i];
    j++;
        
    }
      printf("%s",st1);
    
}
