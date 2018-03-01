#include<stdio.h>
void main()
{
    int i;
    char x[30];
    gets(x);
    x[0]=x[0]-32;
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]==' ')
        {
            x[i+1]=x[i+1]-32;
        }
        
    }
    printf("\n %s",x);
}
