#include<stdio.h>
int main()
{
int i,n,s=80,s1=10;
scanf("%d",&n);
printf("%d ",s);
printf("%d ",s1);
for(i=1;i<=n;i++)
{
if(i%2==0)
{
s1=s1+5;
printf("%d ",s1);
}

else
{
s=s-10;
printf("%d ",s);
}
}
}
