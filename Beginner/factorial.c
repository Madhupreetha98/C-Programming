#include<stdio.h>
#include<conio.h>
int main()
{
int i,fact=1,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf(fact);
return 0;
}
