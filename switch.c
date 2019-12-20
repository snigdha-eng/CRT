#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the two numbers");
scanf("%d %d",&a,&b);
switch(a,b)
{
case 1:c=a+b;
       printf("%d",c);
       break;
case 2:c=a-b;
       printf("%d",c);
       break;
case 3:c=a*b;
       printf("%d",c);
       break;
case 4:c=a/b;
       printf("%d",c);
       break;
default:printf("nothing");
        break;
}
return 0;
}
