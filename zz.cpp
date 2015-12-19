#include<stdio.h>
int main()
{
    long long a[4],j,k,m,i,t,l;
    scanf("%lld",&t);
    for(m=1;m<=t;m++)
    {
    for(i=0;i<4;i++)
    {
       scanf("%lld",&a[i]);
       }

                printf("Case %lld: %lld\n",m,(a[2]+a[3]));

                }
                return 0;
                }

