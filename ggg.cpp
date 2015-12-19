#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    long long a;
    for(i=0;;i++)
    {
       scanf("%d",&n);
       if(n==0)
       break;
       else
       {
           a=((2*n*n*n)+(3*n*n)+n)/6;
           printf("%lld\n",a);
           }
           }
           getch();
           return 0;
           }
           
