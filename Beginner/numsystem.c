#include<stdio.h>
int main()
{
int n,m,i,j,k=1,a[100];
scanf("%d",&m);
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&n);
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {

a[++k]=(a[i]*10)+a[j];
}
}
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
return 0;
}
