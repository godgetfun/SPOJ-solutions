#include<cstdio>
#include<cmath>
#include<conio.h>
int main()
{   
    
    int ca;
    printf("%d",&ca);
    while(ca--)
    {
               int min,max;
               printf("%d%d",&min,&max);
               int limit=max+1;
    int ar[100002]={0},prime[100000];
    int flag=0;
    ar[0]=-1;
    ar[1]=-1;
    for(int i=4;i<limit;i+=2)
    {
           ar[i]=1;
    }
    int i;

    int w=(int)sqrt((double)limit);
    for(int j=3;j<=w;j+=2)
    {
           if(ar[j]==1)
                          continue;
           i=j;
           while(j*i<limit)
           {
                                 ar[j*i]=1;
                                 i+=2;
           }
    }
    int k=0,x,y;
    for(int i=0;i<limit;i++)
    {
                        if(ar[i]==0)
                        {
                                    if(i==min)
                                    x=k;
                                    if(i<min)
                                    x=k+1;
                                    if(i<=max)
                                    y=k;
                                    prime[k++]=i;
                        }
    }
    for(int i=x;i<=y;i++)
    printf("%d\n",prime[i]);
    }
    getch();
    return 0;
}
    
