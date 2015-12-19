#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    long t,n,i,j,sum;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n);
        sum=1;
        k=sqrt(n);
        for(j=2;j<=k;j++)
        {
             if(n%j==0)
             {
                 sum=sum+j+(n/j);
                 }
             
                 
                 }
                 printf("%ld\n",sum);
                 }
                 getch();
                 return 0;
                 }
