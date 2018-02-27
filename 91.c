#include<stdio.h>
void main()
{
int i,l,w,h,sa,volume;
printf("enter l,w,h:");
scanf("%d%d%d",&l,&w,&h);
volume=l*w*h;
sa=(2*l*w)+(2*l*h)+(2*h*w);
printf("surface area of cuboid = %d",sa);
printf("volume of cuboid = %d",volume);
}
