#include<stdio.h>
int main()
{
int i;
long long t,n;
scanf("%lld",&t);
while(t--)
{
scanf("%lld",&n);
int k=0;
int a[n];
for(i=0;i<n;i++)
{
if(n%i==0)
{
a[i]=i;
k++;
}
}
int s=0;
for(i=0;i<k;i++)
{
s=s+a[i];
}
printf("%d",s);
}
return 0;
}
