#include<stdio.h>
int main()
{
char s[10];
int i,j,t,n;
printf("enter string:");
scanf("%s",&s);
n=strlen(s);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(s[i]>s[j])
{
t=s[i];
s[i]=s[j];
s[j]=t;
}}}
printf("%s",s);

return 0;
}
                                    
