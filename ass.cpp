#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main() 
{
    int t,i,k;
    long long a,n,p,x,b[100];
    scanf("%d",&t);
    while(t--) 
    {
               scanf("%lld %d",&a,&k);
               n=(long long)(0.5*(sqrt(1.0+8.0*a)-1.0));
               p=n/k;
               n=p*k;
               for(i=1;i<=k;i++) 
               b[i-1]=(2*i+(p-1)*k)*p/2;
               x=n+1; 
               a-=n*(n+1)/2;
               for(i=0;i<k&&a>0;i++) 
               {
                                     if(x<=a) 
                                     {
                                              b[i]+=x;
                                              a-=x++;
                                     }
                                     else 
                                     {
                                          b[i]+=a;
                                          a=0;
                                     }
               }
               printf("%lld", b[0]);
               for(i=1;i<k;i++) 
               printf(" %lld",b[i]);
               printf("\n");
    }
return 0;
}
