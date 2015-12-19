#include<iostream>
#include<cmath>
#include<conio.h>
#define limit 10000
using namespace std;
int prime(int min,int max)
{
    
    int m,n,ar[10002]={0},c,prime[10000],t;
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
    for(i=0;i<limit;i++)
    {
                        if(ar[i]==0)
                        {           if(i==min)
                                    x=k;
                                    else if(i<min)
                                    x=k+1;
                                    if(i<=max)
                                    y=k;
                                    else if(i>max) break;
                                    prime[k++]=i;
                        }
    }
    for(int i=x;i<=y;i++)
    cout<<prime[i]<<endl;
    
}
int main()
{
    int t,m,n;
    cin>>t;
    while(t--)
    {
              cin>>m>>n;
              prime(m,n);
              }
              
    getch();
    return 0;
}
