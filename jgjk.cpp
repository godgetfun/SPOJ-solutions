#include<stdio.h>
#include<conio.h>
int main()
{
    int t,i;
    long n,j,k;
    long long b;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n);
        j=0;
        k=0;
        if(n%2!=0)
        {
            b=((4*(n-j)*(n-j)*(n-j))-((n-j)*(n-j))-(n-j))/2;
            printf("%lld\n",b);
            j++;
            }
            else
            {
                b=((4*(n-k)*(n-k)*(n-k))+(5*(n-k)*(n-k))+(n-k))/2;
                printf("%lld\n",b);
                k++;
                }
                }
                getch();
                return 0;
                }
                
                  
