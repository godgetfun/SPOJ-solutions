#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    while(1)
    {
          scanf("%d",&n);
          if(n==0)
          break;                  
          int i,c=0,a[1000];
          for(i=0;i<n;i++)
          scanf("%d",&a[i]);
          sort(a,a+n);
          if(a[0]!=0||a[n-1]<1322)
          printf("IMPOSSIBLE\n");
          else
          {
          for(i=1;i<n;i++)
          {
                          c=1;
                          if((a[i]-a[i-1])>200)
                          {
                                           c=2;
                                           break;
                          }
          }
          if(c==1) printf("POSSIBLE\n");
          else printf("IMPOSSIBLE\n");
          }
    }
    return 0;
    }
                        
                                            
