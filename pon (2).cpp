#include<cstdio>
#include<cmath>
void primegen(long int ar[])
{
     long long limit=1000000;
    ar[0]=1;
    ar[1]=1;
    for(long long int i=4;i<limit;i+=2)
    {
           ar[i]=1;
    }
    long long int i;
    long long int w=(long long int)sqrt((double)limit);
    for(long long int j=3;j<=w;j+=2)
    {
           if(ar[j]==1)
                          continue;
           i=j;
           while(j*i<limit)
           {
                                 ar[j*i]=1;
                                 i+=2;
           }
    }
}
int main()
{
    long int ar[100000]={0};
    primegen(ar);
    int t;
    scanf("%d",&t);
    while(t--)
    {
              long long int m,n,i;
              scanf("%ld",&m);
                               if(ar[m]==0)
                               printf("YES\n");
                               else
                               printf("NO\n");
    
    }
 return 0;
}
