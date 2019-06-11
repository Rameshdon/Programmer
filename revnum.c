#include<stdio.h>
void rev(char* );
int main()
{
int num,rev=0;
scanf("%d",&num);
while(num)
{
rev=(num%10)+rev*10;
num=num/10;    
}
printf("%d",rev);
}
    
