#include<stdio.h>
#include<conio.h>
int main()
{
    int t,i;
    int n;
    int b;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n==1)
        {
                b=1;
                printf("%d",b);
                }
                else
                {
        if(n%2!=0)
        {
            b=((4*((n/2)+1)*((n/2)+1)*((n/2)+1))-(((n/2)+1)*((n/2)+1))-((n/2)+1))/2;
            printf("%d\n",b);

            }
            else
            {
                b=((4*(n/2)*(n/2)*(n/2))+(5*(n/2)*(n/2))+(n/2))/2;
                printf("%d\n",b);
                }
                }
                }
                getch();
                return 0;
                }
                
                  
