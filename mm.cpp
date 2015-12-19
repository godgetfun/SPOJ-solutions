#include<stdio.h>
#include<conio.h>
int lcm(int ,int);
int main()
{
    int t,n,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int sum,c,j;
        sum=0;
       scanf("%d",&n);
       for(j=1;j<=n;j++)
       { 
          c=lcm(j,n);
          sum=sum+c;
          }
          printf("%d\n",sum);
          }
          getch();
          return 0;
          }
int lcm(int a,int b)
{
    int x,y,d,g,l;
    x=a;
    y=b;
    while(y!=0)
    {
      d=y;
      y=x%y;
      x=d;
      }
      g=x;
      l=(a*b)/g;
      return(l);
      }
      
       
          
