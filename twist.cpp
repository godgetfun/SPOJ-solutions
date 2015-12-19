#include<cstdio>
#define limit 10000
void twist(long int a[])
{
     long long int i;
                   a[0]=0;
              a[1]=1;
              for(i=2;i<limit;i++)
              {
                              a[i]=a[i-1]+a[i-2];
              }
              
}
    
int main()
{
    int t;
    long int a[limit];
    twist(a);
    scanf("%d",&t);
    while(t--)
    {
              long long int n,m,c;
              scanf("%lld%lld",&n,&m);
              c=2*(a[n+2]-1)-n;
              if(c<m)
              printf("%lld\n",c);
              else
              printf("%lld\n",(c%m));
              
    }
    return 0;
}
