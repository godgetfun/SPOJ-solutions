#include<cstdio>

int main()
{
    long long int a,b,c,d;
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        d=(a*a)-(2*b);
        printf("%lld\n",d);
    }
    return 0;
}
