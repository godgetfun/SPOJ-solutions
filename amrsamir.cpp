#include<cstdio>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              int n,i;
              scanf("%d",&n);
              int a[10001];
              int b[101]={0};
              int max=b[0];
              int fre=0;
              for(i=1;i<=n;i++)
              {
                              scanf("%d",&a[i]);
                              b[a[i]]++;
                              if(b[a[i]]>max)
                              {
                              max=b[a[i]];
                              fre=a[i];
                              }
                              if(b[a[i]]==max)
                              {
                                            if(a[i]<fre)
                                            fre=a[i];
                              }
              }
              if(fre==0)
              printf("-1\n");
              else
              {
                  if(fre>max)
                  {
                             if(fre%max==0)
                             printf("%d\n",fre);
                             else
                             printf("-1\n");
                  }
                  else
                  {
                      if(max%fre==0)
                             printf("%d\n",fre);
                             else
                             printf("-1\n");
                  }
                  }
    }
    return 0;
}
    
