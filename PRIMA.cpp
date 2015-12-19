#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
      int m,n,i,j,c;
      int t;
      scanf("%d",&t);
      while(t--)
      {
          scanf("%d",&m);
          scanf("%d",&n);
          int *a;
          a=malloc(sizeof(int)*(n+2));
          for(i=0;i<=n;i++)
          {
              a[i]=1;
          }
          c=(int)sqrt(n);
          for(i=2;i<=c;i++)
          {
              j=2;
              while((i*j)<=n)
              {
                  a[i*j]=0;
                  j++;
              }
          }
          for (i=m;i<=n;i++)
          {
              if(i==1)
                  continue;
              if(a[i]!=0)
                  printf("%d\n",i);
          }
      }
      return 0;
}
