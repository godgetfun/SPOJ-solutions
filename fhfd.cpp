#include<stdio.h>
#include<conio.h>
int main()
{
    long long a,b,i,c,n,m,s,t;
    scanf("%lld",&t);
    while(t--)
    {
         scanf("%lld%lld",&n,&m);
         a=2;
         b=3;
         s=a+b;
         if(n==1)
         printf("%lld\n",(a%m));
         else if(n==2)
         printf("%lld\n",(b%m));
         else
         {
         for(i=2;i<n;i++)
         {
            c=a+b;
            a=b;
            b=c;
            s=(s+c)%m;
            }
            printf("%lld\n",s);
            }
            }
            getch();
            return 0;
            }
