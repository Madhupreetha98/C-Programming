#include<stdio.h>
#include<conio.h>
int main()
{
int n,rem,sum=0;
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
sum+=rem*rem*rem;
n=n/10;
}
if(sum==n)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
