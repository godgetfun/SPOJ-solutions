#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<iostream>
using namespace std;
int limit=31700;
int ar[31700]={0};
int main()
{
    int w,i,j;
    ar[0]=-1;
    ar[1]=-1;
    w=(int)sqrt(limit);
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
    int t;
    scanf("%d",&t);
    while(t--)
    {
              int m,n,k;
              scanf("%d%d",&m,&n);
              for(k=m;k<=n;k++)
              {
                               if(ar[k]==0)
                               printf("%d\n",k);
              }
    }
 return 0;
}
