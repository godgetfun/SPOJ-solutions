#include<stdio.h>
#include<conio.h>
int main()
{
    long long a[4],j,k,m,i,t,l;
    scanf("%lld",&t);
    for(m=1;m<=t;m++)
    {
    for(i=0;i<4;i++)
    {
       scanf("%lld",&a[i]);
       }
       for(l=1;l<4;l++)
       {
           k=a[l];
           j=l-1;
           while(j>=0 && a[j]>k)
           {
                a[j+1]=a[j];
                a[j]=k;
                j--;
                }
                }
                if((a[0]+a[3])>=(a[1]+a[2]))
                printf("Case %lld: %lld",m,(a[0]+a[3]));
                else
                printf("Case %lld: %lld",m,(a[1]+a[2]));
                }
                getch();
                return 0;
                }
                
