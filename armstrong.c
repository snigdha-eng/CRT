#include<stdio.h>
int main()
{
int num,orginalnum,remainder,result=0;
printf("enter a three digit number");
scanf("%d",&num);
orginalnum=num;
while(orginalnum!=0)
{
remainder=orginalnum%10;
result+=remainder*remainder*remainder;
orginalnum/=10;
}
if(result==num)
printf("armstrong number",num);
else
printf("not an armstrong number",num);
}



