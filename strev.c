#include<stdio.h>
void rev(char* );
int main()
{
char str[1000];
int len1,ind,start=0;
scanf("%[^\n]",str);
 for(len1=0;str[len1];len1++);
 for(ind=0;ind<len1;ind++)
 {
 if(str[ind]==32)
 {
     str[ind]='\0';
     rev(str+start);
     str[ind]=32;
     start=ind+1;
 }
 }
 rev(str+start);
printf("%s",str);
    return 0;
}  
void rev(char* str)
{
    int i=0,j,len;
    char temp;
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
}
    
