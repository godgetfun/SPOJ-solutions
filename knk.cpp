#include<stdio.h>
#include<conio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,a=0;
        scanf("%d",&n);
        int x[n];
        for(i=0;i<n;i++)
        {
           scanf("%d",&x[i]);
           }
           i=0;
           while(x[i]>=(i+1) && i<n)
           {
              a=a+x[i]/(i+1);
              i++;
              }
              if(a%2!=0)
              printf("ALICE\n");
              else
              printf("BOB\n");
              }
              getch();
              return 0;
              }
               
