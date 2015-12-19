#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              long int w,h,n,max,max1,i;
              scanf("%ld%ld%ld",&w,&h,&n);
              long int a[n],b[n];
              for(i=2;i<n+2;i++)
              {
                              scanf("%ld%ld",&a[i],&b[i]);
              }
              a[0]=0;
              a[1]=w+1;
              sort(a,a+n+2);
              b[0]=0;
              b[1]=h+1;
              sort(b,b+n+2);
              max=a[1]-a[0];
              for(i=2;i<n+2;i++)
              {
                                if(a[i]-a[i-1]>max)
                                max=a[i]-a[i-1];
              }
              max1=b[1]-b[0];
              for(i=2;i<n+2;i++)
              {
                                if(b[i]-b[i-1]>max1)
                                max1=b[i]-b[i-1];
              }
              printf("%ld\n",(max-1)*(max1-1));
    }
    return 0;
}              
                     

              
              
              
              
