#include<cstdio>
int main()
{   
    int t;
    long long i;
    double a,n,c,d;
    scanf("%d",&t);
    while(t--)
       {   
          scanf("%lf",&n);
          a=2.0/3.0;
          for(i=1;i<n;i++)
          {   
             a+=1/(double)((i+1)*(i+2)*(i+3));
          }
          printf("%.11lf\n",a);
       }
       return 0;
    }
