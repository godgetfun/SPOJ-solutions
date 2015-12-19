#include<cstdio>
#include<cmath>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              long long n,k,i,x,nop;
              long double y;
              scanf("%lld%lld",&n,&k);
              long long a[k];
              y=((sqrtl(1+8*n)-1.0)/(2.0*(long double)k));
              nop=(long long int)(((2.0*(long double)k*y+1.0)*(2.0*(long double)k*y+1.0)-1.0)/8.0);
              long long flag=n-nop;
              for(i=1;i<=k;i++)
              {
                               a[i-1]=(i*x)+((k*x/2)*(x-1));
              }
              if(flag!=0)
              {
                         for(i=1;i<=k;i++)
                         {
                                          long long c=(x*k+i);
                                          if(flag>=c)
                                          {a[i-1]+=c;
                                          printf("%lld ",a[i-1]);}
                                          else
                                          {a[i-1]+=flag;
                                          flag=0;
                                          printf("%lld ",a[i-1]);}                
                         }
              }
              else
              {for(i=1;i<=k;i++)
              printf("%lld ",a[i-1]);}
    }
    return 0;
}
                         
              
              
              
