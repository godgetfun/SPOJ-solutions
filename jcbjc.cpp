#include<stdio.h>
#include<conio.h>
int main()
{
     int t,n,k,i,s;
     scanf("%d",&t);
     while(t--)
     {
         s=0;
         scanf("%d%d",&n,&k);
         int x[n];
         for(i=0;i<n;i++)
         scanf("%d",&x[i]);
         for(i=0;i<n;i++)
         {
             s=s+(x[i]/k);
             }
             printf("%d\n",s);
             }
             getch();
             return 0;
             }
