#include<stdio.h>
int main()
{
int n,s,r;
int sum=0;
printf("\n enter the number");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
s=r*r;
sum=sum+s;
n=n/10;
}
printf("%d",sum);
return 0;
}
