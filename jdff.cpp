#include<stdio.h>
#include<conio.h>
int main()
{
    int t,i;
    long n;
    long long a;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
         scanf("%ld",&n);
         a=(n*(n+2)*(2*n+1))/8;
         printf("%lld\n",a);
         }
         getch();
         return 0;
         }
         
