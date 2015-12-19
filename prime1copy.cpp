#include<cstdio>
#include<cmath>
#include<cstring>
#define limit 1000
void primegen(long int ar[])
{
    long int w,i,j;
    ar[0]=-1;
    ar[1]=-1;
    for(i=4;i<limit;i+=2)
    {
           ar[i]=1;
    
    }
    w=(long int)sqrt(limit);
    for(j=3;j<=w;j+=2)
    {
           if(ar[j]==0)
           {
           i=j;
           while(j*i<limit)
           {
                                 ar[j*i]=1;
                                 i+=2;
           }
           }
    }
}
int main()
{
    long int ar[limit]={0};
    primegen(ar);
    long int t;
    scanf("%ld",&t);
    while(t--)
    {
              long int m,n,i;
              scanf("%ld%ld",&m,&n);
              for(i=m;i<=n;i++)
              {

                               if(ar[i]==0)
                               printf("%ld\n",i);
              }
    }
 return 0;
}
