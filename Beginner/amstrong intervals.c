#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int n1,n2,t1,t2,rem,sum=0,i,m=0;
printf("Enter the intervals");
scanf("%d %d",&n1,&n2);
for(i=n1+1;i<n2;i++)
{
t2=i;
t1=i;
while(t1!=0)
{
t1/=10;
++m;
}
while(t2!=0)
{
rem=t%10;
sum+=pow(rem,m);
t2/=10;
}
if(sum==i)
{
printf("%d',i);
}
m=0;
sum=0;
}
return 0;
}
