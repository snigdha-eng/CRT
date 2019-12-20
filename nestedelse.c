#include<stdio.h>
int main()
{
int a;
printf("enter the height of a person",a);
scanf("%d",&a);
if(a<150)
{
printf("dwarf");
}
else if(a>150&&a<165)
{
printf("average height");
}
else if(a>165&&a<190)
{
printf("tall");
}
else if(a>190)
{
printf("abnormal height");
}
return 0;
}
