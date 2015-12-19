#include<cstdio>
#include<conio.h>
#include<algorithm>
using namespace std;
int main()
{
    long long i,j,c,d,x[3];
   for(i=0;;i++)
   {
      for(j=0;j<3;j++)
      {
         scanf("%lld",&x[j]);
         }
         if(x[0]==0 && x[1]==0 && x[2]==0)
          break;
          else
          {
          sort(x,x+3);
          c=(x[0]*x[0])+(x[1]*x[1]);
          d=x[2]*x[2];
          if(c==d)
          printf("right\n");
          else
          printf("wrong\n");
          }
          }
          getch();
          return 0;
          }
          
          
          
