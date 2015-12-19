#include<cstdio>
#include<algorithm>

using namespace std;
int main()
{
          long long int n;
          while(1)
          {
                  long long int a[10000]={0},i;
                  long long int sum=0;
                  if(scanf("%lld",&n)==EOF)
                  break;
                  for(i=0;i<n;i++)
                  {
                                  scanf("%lld",&a[i]);
                  }
                  sort(a,a+n);
                  for(i=0;i<n-1;i++)
                  {
                                    a[i+1]=a[i]+a[i+1];
                                    sum+=a[i+1];
                                    if(a[i+1]>a[i+2])
                                    sort(a+i+1,a+n);
                  }
printf("%lld\n",sum);
}
return 0;
}
