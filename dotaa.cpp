#include<cstdio>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              int n,m,i,res=0;
              int d,a[10000];
              scanf("%d%d%d",&n,&m,&d);
              for(i=0;i<n;i++)
              {
                              scanf("%d",&a[i]);
                              if(a[i]>d)
                              {
                                        if(a[i]%d==0)
                                        res+=a[i]/d-1;
                                        else
                                        res+=a[i]/d;
                              }
              }
              if(res>=m)
              printf("YES\n");
              else
              printf("NO\n");
              }
              return 0;
              }
              
