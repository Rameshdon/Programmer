#include<stdio.h>

int main()
{
int num;
scanf("%d\n",&num);
int a[10000],mar[100],c=0,no;
int ind;
for(ind=0;ind<num;ind++)
{
    scanf("%d",&a[ind]);
    no=a[ind];
    if(no==ind)
    mar[ind]++;
}
for(ind=0;ind<num;ind++)
{
if(mar[ind]>=1)
{
printf("%d ",ind);
c++;
}
}
if(c==0)
{
    printf("-1");
}
}    
    
    
