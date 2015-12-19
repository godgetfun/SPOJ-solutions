#include<cstdio>
#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
int prime(int k)
{
    int t=0,i;
    if(k==2)
    return 1;
    else if(k%2==0)
    {return 0;}
    else
    {
    for(i=3;i<k/2;i+=2)
    {if(k%i==0)
    t=1;
    break;}
    if(t==1)
    return 0;
    else
    return 1;
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    
while(t--)
{         
          int res=0,j,tum=0;
          int a[100000];
          int i,n;
          a[0]=1;
          scanf("%d",&n);
          for(i=1;i<=n;i++)
          {a[i]=(51*a[i-1]+52)%53+1;
          tum+=a[i];
          if(prime(a[i]))
          res++;}
          if(prime(tum))
          res++;
          for(i=1;i<=n;i++)
          printf("%d ",a[i]);
          for(i=2;i<=n;i++)
          {int sum=0;
          for(j=i;j<=i;j++)
          {sum+=a[j];
          if(prime(sum))
          {res++;}}}
          printf("%d\n",res);
}
          getch();
          return 0;
}
          
