#include<stdio.h>
int main()
{
long long int year;
scanf("%lld",&year);
if((year%400==0)||((year%4==0)&&(year%100!=0)))
printf("yes");
else 
printf("no");
return 0;
}

