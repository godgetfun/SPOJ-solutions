#include<cstdio>
int absurd(ll n)
{
    while(1)
              {
                    ll c;
                      c=n%10;
                      if(c==0)
                      n=n/10;
                      else
                      break;
              }
              int abs,a=0;
              ll flag;
              flag=n;
              while(flag!=0)
              {
                            a++;
                            flag/=10;
              }
              int d=n%10;
              if(d==5)
              abs=2*a-1;
              else
              abs=2*a;
              return abs;
}
    
typedef long long ll;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              ll n;
              scanf("%lld",&n);
              abs=adsurd(n);
              
              
              
              
