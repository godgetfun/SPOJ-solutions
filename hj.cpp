#include<stdio.h>
#include<conio.h>
int main()
{
    int t;
    long long i,j,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
         scanf("%lld",&n);
         long long x[n];
         x[0]=1;
         for(j=1;j<n;j++)
         {
             x[j]=x[j-1]+(j*4);
             }
             printf("%lld\n",x[n-1]);
             }
             getch();
             return 0;
             }
         
    
