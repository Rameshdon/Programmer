#include<stdio.h>
int main()
{
long long int num,sum=0;
scanf("%lld",&num);
while(num)
{
sum=(num%10)*(num%10)+sum;    
num=num/10;    
}
printf("%lld",sum);
}
    
