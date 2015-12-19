#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
                     
                     int j=0,tum=0,sum=0,max,n;
                     int k,l;
                     scanf("%d%d",&max,&n);
                     int a[n];
                     for(k=0;k<n;k++)
                     {
                                     scanf("%d",&a[k]);
                                     sum+=a[k];
                     }
                     if(sum<max)
                     {printf("Scenario #%d:\nimpossible\n",i);}
                     else
                     {sort(a,a+n);
                     for(l=n-1;l>=0;l--)
                     {
                                        tum+=a[l];
                                        j++;
                                        if(tum>=max)
                                        break;
                     }
                     printf("Scenario #%d:\n%d\n",i,j);}
    
    }
    return 0;
}
                     
