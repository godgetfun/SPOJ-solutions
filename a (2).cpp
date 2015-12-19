#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    long int t;
    scanf("%d",&t);
    while(t--)
    {
              long int n,m,num,i,t=0,M,x;
              long int a[1000000]={0};
              scanf("%ld%ld",&n,&m);
              M=2*m;
              for(i=0;i<M;i++)
              {
                                scanf("%ld",&x);
                                a[x]++;
              }
              if(m==0)
              printf("2 %ld\n",n);
              else if(a[n]==0)
              printf("2 %ld\n",n);
              else
              printf("1\n");             
              }
    }
    return 0;
}
              
              
