#include<stdio.h>
int main()
{
char name[30];
puts("enter a name");
//gets(name);
scanf("%[^\n]s",&name);
printf("your name is");
puts(name);
return 0;
}
