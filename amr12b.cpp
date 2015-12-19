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
              long int a[10000]={0};
              scanf("%ld%ld",&n,&m);
              for(i=0;i<2*m;i++)
              {
                                scanf("%ld",&x);
                                a[x]++;
              }
              if(m==0)
              printf("2 %ld\n",n);
              else if(a[n]==0)
              printf("2 %ld\n",n);
              else
              {
              n=num;
              for(i=n;i>0;i--)
              {
                                 if(a[i]==0)
                                 {
                                            t=1;
                                            break;
                                 }
              }
              if(t==1)
              printf("1\n");             
              else
              printf("0\n");
              }
    }
    return 0;
}
              
              
