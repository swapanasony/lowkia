#include<stdio.h>
void main()
{
char str[30];
    int flag=0,i,j;
    printf("enter the string");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++)
    {
        for(j=0;str[j]!='\0';j++)
         {
            if(str[i]==str[j])
            {
                flag++;
            }
         }
    }
    if(flag==0)
    {
        printf("\nstring is ISOGRAM");
    }
    else
    {
        printf("\nstring is NOT A ISOGRAM");
    }
}
