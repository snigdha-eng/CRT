#include<stdio.h>
int main()
{
int a,b;
char ch;
printf("1.add\n 2.sub\n 3.mul\n 4.div\n");
printf("enter 2 numbers");
scanf("%d %d",&a,&b);
printf("enter your choice");
scanf("%c",&ch);
switch(ch)
{
case '+': printf("add is: %d",a+b);
          break;
case '-':printf("sub is: %d",a-b);
         break;
case '*':printf("mul is: %d",a*b);
         break;
case '/':printf("div is: %d",a/b);
         break;
default:printf("nothing");
        break;
}
return 0;
}
