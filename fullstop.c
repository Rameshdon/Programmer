#include<stdio.h>
void rev(char* );
int main()
{
char st[100];
scanf("%s",st);
int len,i;
for(len=0;st[len];len++);
st[len]='.';
st[len+1]='\0';
printf("%s",st);
}
    
