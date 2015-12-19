#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<iostream>
using namespace std;
int limit=31700;
int *ar;
int primegen(int *ar)
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
    return 0;
}
int main()
{
ar=(int *)malloc(sizeof(int)*(limit));   
memset(ar,0,sizeof(int)*(limit));

    
    primegen(ar);
    int t;
    scanf("%ld",&t);
    while(t--)
    {
              long int m,n,i;
              scanf("%ld%ld",&m,&n);
              if(m==1)
              m++;
              for(i=m;i<=n;i++)
              {
                               if(i==2)
                               printf("2\n");
                               else if(i%2==0)
                               continue;
                               else if(ar[i]==0)
                               printf("%ld\n",i);
              }
    }
 return 0;
}
