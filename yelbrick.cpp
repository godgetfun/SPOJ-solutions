#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    while(1)
    {
            long long n,i,t=0,m;
            long long min[1000],w[1000],h[1000],d[1000],mul[1000];
            long long tum=0;
            scanf("%lld",&n);
            if(n==0)
            break;
            else
            for(i=0;i<n;i++)
            {
                            scanf("%lld%lld%lld",&w[i],&h[i],&d[i]);
                            min[i]=w[i];
                            if(h[i]<min[i])
                            min[i]=h[i];
                            if(d[i]<min[i])
                            min[i]=d[i];
                            mul[i]=w[i]*h[i]*d[i];
                            tum+=mul[i];
            }
            sort(min,min+n);
            if(min[0]==1)
            {
                         long long sum=0;
                         for(i=0;i<n;i++)
                         sum+=mul[i];
                         printf("%lld\n",sum);
            }
            else
            {
                m=min[0]*min[0]*min[0];
                for(i=0;i<n;i++)
                if(mul[i]%m!=0)
                {
                        t=1;
                        break;
                }
                if(t==0)
                printf("%d\n",tum/m);
                else
                for(i=min[0]-1;i>=1;i++)
                {
                                        m=i*i*i;
                                        long long q=0;
                                        for(long long j=0;j<n;j++)
                                        {
                                                        if(mul[i]%m!=0)
                                                        {
                                                                       q=1;
                                                                       break;
                                                        }
                                        }
                                        if(q==0)
                                        {
                                                printf("%lld\n",tum/m);
                                                break;
                                        }
                }
            }
    }
    return 0;
}
                                   
            
            
            
                        
                        
            
                         
            
