#include<cstdio>
#include<conio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,j;
    while(1)
    {
       scanf("%d",&n);
       if(n==0)
       {
       break;
       }
       else
       {
           int i,a[n];
           j=0;
           for(i=0;i<n;i++)
           {
           scanf("%d",&a[i]);
           }
           if(n<8)
           {
           printf("IMPOSSIBLE\n");
           }
           else
           {
               sort(a,a+n);
               if(a[n-1]<1322)
               printf("IMPOSSIBLE\n");
               else
               {
               for(j=0;j<(n-1);j++)
               {
                   if(a[j+1]-a[j]<200)
                   {
                       printf("IMPOSSIBLE\n");
                       break;
                       }
                       }
                       }
                       }
                       if(j==(n-1))
                       printf("POSSIBLE\n");
                       }
                       }
                       getch();
                       return 0;
                       }
           
