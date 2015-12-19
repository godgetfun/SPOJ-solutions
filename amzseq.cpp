#include<cstdio>
int main()
{
    long long int a[1005];
    long long int n,i;
    while(scanf("%lld",&n)!=EOF)
    {
    a[0]=1;
    a[1]=3;
    for(i=2;i<=n;i++)
    a[i]=2*a[i-1]+a[i-2];
    printf("%lld\n",a[n]);
    }
    return 0;
}
    
