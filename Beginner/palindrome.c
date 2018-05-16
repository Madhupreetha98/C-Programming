#include<stdio.h>
#include<conio.h>
int main()
{
int rev=0,rem,n;
scanf("%d",&n);
while(n>0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(rev==n)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
