#include<stdio.h>
int main()
{
int n,a[100];
int i,j,count;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{ count=0;
for(j=i+1;j<=n;j++)
{
if(a[i]==a[j])
{
count++;
break;
}
}
if(count>0)
{
printf(" %d",a[i]);
}
}
return 0;
}
