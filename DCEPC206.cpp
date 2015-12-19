#include<cstdio>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              long long int n,sum=0;
              scanf("%lld",&n);
              long long int a[n];
              scanf("%lld",&a[0]);
              for(long long i=1;i<n;i++)
              {
                              scanf("%lld",&a[i]);
                              {
                                                for(long long j=0;j<i;j++)
                                                {
                                                       if(a[j]<a[i])
                                                             sum+=a[j];
                                                }
                              }
              }
              printf("%lld\n",sum);
    }
}
