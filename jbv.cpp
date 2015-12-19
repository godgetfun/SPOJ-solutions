#include<stdio.h>
#include<conio.h>
int main()
{
    long long int i,j,t,n;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        long long int x[n];
        x[0]=1;
        x[1]=2;

            for(j=2;j<=n;j++)
            {
            x[j]=x[1]+x[0];
            x[0]=x[j-1];
            x[1]=x[j];
            }
            printf("%lld\n",x[n]);
            
            }
            getch();
            return 0;
            }
            
