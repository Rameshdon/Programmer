#include<stdio.h>

int main()
{
char str[1000],temp;
int i=0,j,len;
scanf("%[^\n]",str);
for(len=0;str[len];len++);
j=len-1;
while(i<j)
{
 temp=str[i];
 str[i]=str[j];
str[j]=temp;
 i++;
 j--;
}
printf("%s",str);
    return 0;
}
    
    
