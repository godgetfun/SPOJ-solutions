#include<cstdio>
typedef long long ll;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              ll a[1000],b[1000],c,min;
              int j,n1,n2;
              scanf("%d",&n1);
              for(int i=0;i<n1;i++)
              scanf("%lld",&a[i]);
              scanf("%d",&n2);
              for(int i=0;i<n2;i++)
              scanf("%lld",&b[i]);
              min=a[0]-b[0];
              if(min<0)
              min=-min;
              if(min!=0)
              for(int i=0;i<n1;i++)
              {
                               for(j=0;j<n2;j++)
                               {
                                                if(i==0&&b==0) continue;
                               c=a[i]-b[j];
                               if(c==0) 
                               {min=0;
                               break;}
                               if(c<0) c=-c;
                               if(c<min) min=c;
                               }
                               if(c==0) break;
              }
              printf("%lld\n",min);
              }
              return 0;
}
              
