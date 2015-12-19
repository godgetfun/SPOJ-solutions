#include<stdio.h>
#include<conio.h>
int main()
{
    int t,n,a,k,i,j;
    int x[200];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        a=1;
        scanf("%d",&n);
        k=0;
        for(j=n;j>0;j--)
        {
           a=a*j; 
           while(a>=10)
           {
              x[k]=a%10;
              a=a/10;
              k++;
              }
              }
              for(j=k;j>=0;j--)
              {
                 printf("%d",x[j]);
                 }
                 printf("\n");
                 }
                 getch();
                 return 0;
                 }
