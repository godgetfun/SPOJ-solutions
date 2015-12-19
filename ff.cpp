#include<stdio.h>
#include<conio.h>
int main()
{
    int t,i;
    long n,c;
    long long b;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n);
        if(n==1)
        {
                b=1;
                printf("%lld",b);
                }
                else
                {
        if(n%2!=0)
        {
            c=((n/2)+1);
            b=((4*c*c*c)-(c*c)-(c))/2;
            printf("%lld\n",b);

            }
            else
            {
                c=(n/2);
                b=((4*c*c*c)+(5*c*c)+c);
                printf("%lld\n",b);
                }
                }
                }
                getch();
                return 0;
                }
                
                  
