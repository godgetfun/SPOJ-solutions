#include<stdio.h>
#include<conio.h>
int main()
{
    long long a,d,i,r,n,c,m,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld%lld\n",&a,&d,&r);
        scanf("%lld%lld",&n,&m);
        for(i=1;i<n;i++)
        {
            if(i%2!=0)
            {
               a=a+d;
               c=a%m;
               }
               else
               {
                   a=a*r;
                   c=a%m;
                   }
                   }
                   printf("%lld\n",c);
                   }
                   getch();
                   return 0;
                   }
    
