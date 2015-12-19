#include<stdio.h>
#include<conio.h>
int main()
{
    long long t,n,m,a,b,i,j,d,c;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld",&n,&m);
        a=0;b=1;
        for(j=2;j<=n;j++)
        {
           c=a+b;
           d=(c+(j-1))%m;
           a=b;
           b=d;
           }
           printf("%lld\n",d);
           }
           getch();
           return 0;
           }
           
        
