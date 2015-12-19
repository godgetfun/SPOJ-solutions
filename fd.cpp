#include<cstdio>
int main()
{
    int t;
    long long int a[10005];
    scanf("%d",&t);
    while(t--)
    {
              long long int n,i;
              scanf("%lld",&n);
              a[0]=1;
              a[1]=2;
              for(i=2;i<=n;i++)
              {
                              a[i]=a[i-1]+a[i-2]+(i-1);
              }
              printf("%lld\n",a[n]);
    }
    return 0;
}
