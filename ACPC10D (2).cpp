#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    while(1)
    {
              long int n,i,j,sum=0,flag;
              scanf("%ld",&n);
              if(n==0)
              break;
              long int a[n][3];
              for(i=0;i<n;i++)
              {
                              for(j=0;j<3;j++)
                              {
                                              scanf("%ld",&a[i][j]);     
                              }
              }
              sum+=a[0][1];
              flag=a[n-1][1];
              for(i=0;i<n;i++)
              sort(a[i],a[i]+3);
              if((sum!=a[0][0])&&(a[0][0]<sum))
              sum+=a[0][0];
              for(i=1;i<n-1;i++)
              {
                                sum+=a[i][0];
              }
              if(flag!=a[n-1][0]&&a[n-1][0]<0)
              {
                                              sum+=a[n-1][0];
              }
              printf("%ld\n",sum);
    }
    return 0;
}
                                                           
              
                                              
