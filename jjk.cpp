#include<stdio.h>
int main()
{
long long t,a,b,c;
scanf("%lld",&t);
while(t--)
{
scanf("%lld %lld",&a,&b);
if((a>0 && b>0) || (a<0 && b<0))
{
if(a>b)
{
if(a%b==0)
{
c=a/b;
printf("%lld\n",(c-1));
}
else
printf("%lld\n",(a-b));
}
else
{
if(b%a==0)
{
c=b/a;
printf("%lld\n",(c-1));
}
else
printf("%lld\n",(b-a));
}
}
else
{
if(b<0 && a>0 )
{
if(a==(-b))
printf("2");
else
printf("%lld\n",(a-b));
}
if(a<0 && b>0)
{
if(b==(-a))
printf("2");
else
printf("%lld\n",(a-b));
}
}
}
return 0;
}




