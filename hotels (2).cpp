#include<cstdio>
#include<iostream>

using namespace std;
int main()
{
    int m,n,i,k=0,max=-1,sum=0;
    scanf("%d%d",&n,&m);
    int a[n];
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);
    sum+=a[i];}
    if(sum<=m)
    printf("%d\n",sum);
    sort(a,a+n);
    while(1)
    {int tum=0;
    for(i=k;i<n,tum<=m;i++)
    {
                    tum+=a[i];
    }
    if(tum==m)
    {printf("%d\n",tum);
    break;}
    if(i==n)
    {printf("%d\n",max);
    break;}
    else if(tum>max)
    max=tum;
    k++;  
    }  
    
    return 0;
}   
                           
    
    
    
