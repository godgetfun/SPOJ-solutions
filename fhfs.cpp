#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,t,n,k,l,m;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
       }
       for(l=1;l<n;l++)
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
                for(m=0;m<n;m++)
                {
                    printf("%d  ",a[m]);
                    }
                getch();
                return 0;
                }
