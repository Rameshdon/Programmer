#include<stdio.h>
int main()
{
  long long int num,fact=1;
  scanf("%lld",&num);
  while(num!=0&&num>0)
  {
      fact=fact*num;
      num--;
      
  }
  printf("%lld",fact);
  return 0;
}

