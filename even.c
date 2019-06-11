#include<stdio.h>
#include<ctype.h>
int main()
{
long long int num;
scanf("%lld",&num);
if(num%2==0&&num>0)
printf("Even");
else if(num>0)
printf("Odd");
else
printf("invalid");
return 0;
}
