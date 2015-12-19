#include<cstdio>
long long power(long long int a, long long int b)
{
  long long pow = 1;
  while(b) 
  {
         if (b&1) 
         {
           pow*=a;
           --b;
         }
         a=a*a;
         b=b/2;
  }
  return pow;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              long long int a,d,r,n,m,sum,tum=0,res;
              scanf("%lld%lld%lld%lld%lld",&a,&d,&r,&n,&m);
              if(r==1)
              {
                      if(n%2!=0)
                      res=a+(n-1)/2*d;
                      else
                      res=a+n/2*d;
              }             
              else
              {        
              sum=a*power(r,((n-1)/2));
              tum=(power(r,((n+1)/2))-1)/(r-1);
              if(n%2==0)
              res=sum+d*tum;
              else
              res=sum+(d*tum)-d;
              }
              if(m<=0)
              printf("%lld\n",res);
              else
              printf("%lld\n",res%m);
    }
    return 0;
}
                                            
