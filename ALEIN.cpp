#include<cstdio>
#include<iostream>
using namespace std;

long int sub(long int a[], long int n, long int sum)
{
    long int c=a[0],max=0,ini=0,i;
    long int count[n];
    memset(count,1,sizeof(int)*n);
    for(i=1;i<=n;i++)
    {
        
        while(c>sum&&(ini<i-1))
        {
            c=c-a[ini];
            ini++;
        }
        if(max<c)
            max=c;
        c=c+a[i];
    }
    return max;
}
int main()
{
    long int n,m,i;
    int t;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%ld",&n);
    scanf("%ld",&m);
    long int a[n];
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
    printf("%ld\n",sub(a,n,m));
}
    return 0;
}
