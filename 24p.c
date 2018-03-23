#include<stdio.h>
int main()
{
char a[10];
int i,l,flag;
printf("enter the string:");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if((a[i]>='0')&&(a[i]<='9'))
{
    flag=1;
}
else
{
    flag=0;
}
}
if(flag==0)
{
printf("it is not numeric");
}
else
{
printf("it is numeric");
}

return 0;
}
