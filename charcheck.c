#include<stdio.h>
#include<ctype.h>
int main()
{
char ch;
scanf("%c",&ch);
if(ch>='A'&&ch<='z')
printf("Yes");
else 
printf("No");
return 0;
}
