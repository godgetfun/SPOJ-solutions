#include<cstdio>
#define limit 10000
void div(long long int n,long long int a[])
{
     long long int temp,i;
    temp=(long long int)sqrt(n);
    for(i=2;i<=temp;i++) 
                         { 
                         if (n%i==0)
                               {
                                    if(a[i]==1||a[n/i]==1)
                                    {
                                     a[n]=-1;
                                      break;
                                    }
                               }
                         } 
    } 
                     
void check(long long int a[])
{
     long long int i;
    for(i=2;i<limit;i++)
    {
                        if(a[i]==-1||a[i]==1)
                        continue;
                        else
                        a[i*i*i]=1;
                        div(i,a);
    }
}


int main()
{
    int a[limit]={0};
    check(a);
    long long int k,j;
    k=0;
    for(j=0;j<limit;j++)
    {
                        if(a[i]==0)
                        {b[k]=j;
                        k++;}
    }
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
              lon long int n;
              scanf("%lld",&n);
              printf("Case %d: %lld\n",i,a[n]);
    }
    return 0;
}
              
    
