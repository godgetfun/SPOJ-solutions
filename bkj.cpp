#include<stdio.h>
int main()
{
    long int i,j,t,n,a,b,c;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        a=2;
        b=3;
        scanf("%ld",&n);
        if(n==1)
        printf("%ld\n",a);
        else if(n==2)
        printf("%ld\n",b);
        else
        {
            for(j=0;j<(n-2);j++)
            {
            c=a+b;
            a=b;
            b=c;
            }
            printf("%ld\n",c);
            }
            }
            return 0;
            }
            


