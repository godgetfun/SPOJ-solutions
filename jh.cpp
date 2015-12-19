#include<stdio.h>
#include<conio.h>
int main()
{
     long long a,b,c,d,e,f,g,h,l;
     int i,t,j;
     scanf("%d",&t);
     for(j=0;j<t;j++)
     {
     scanf("%lld%lld%lld",&a,&b,&c);
     d=a+b;
     if(c%d==0)
     {
               e=c/d;
               f=e*2;
      }
      else
      {
          e=c/d;
          f=(e*2)+1;
      }
      printf("%lld\n",f);
      h=(b-a)/(f-5
      );
      g=a-(2*h);
      for(i=0;i<f;i++)
      {
               l=g+(i*h);
               printf("%lld ",l);
               }
               }
               getch();
               return 0;
               }               
