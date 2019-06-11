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
    if((no%2==0)&&(ind%2!=0))
    printf("%d",no);
    else if((no%2!=0)&&(ind%2==0))
    printf("%d",no);
}
    return 0;
}    
    
    
