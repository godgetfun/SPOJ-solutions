#include<cstdio>
#include<conio.h>
int main()
{
    long int n,a[30000],res=0,i,j,k,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    k=n;
    for(i=0;i<n;i++)
    {               if(a[k-1]==min) 
                    continue;
                    else
                    int min,pos;
                    min=a[0];
                    for(j=1;j<k;j++)
                    {
                                    if(a[j]<min)
                                    {
                                                min=a[j];
                                                pos=j;
                                    }
                    }
                    for(l=pos+1;l<n;l++)
                    {
                                        a[l-1]=a[l];
                    }
                    a[n-1]=min;
                    res++;
                    k--;
    }
    getch();
    return 0;
}
                      
                                    
