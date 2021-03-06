#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;
long long fibonacci(long long int n,long long int m)
{
    long long fib[2][2]={{1,1},{1,0}},ret[2][2]={{1,0},{0,1}},tmp[2][2]={{0,0},{0,0}};
    long long int i,j,k;
    while(n)
    {
        if(n&1)
        {
            memset(tmp,0,sizeof(tmp));
            for(i=0; i<2; i++)
            for(j=0; j<2; j++)
            for(k=0; k<2; k++)
                        tmp[i][j]=((tmp[i][j]+ret[i][k]*fib[k][j]))%m;
            for(i=0; i<2; i++) 
            for(j=0; j<2; j++) 
            ret[i][j]=tmp[i][j]%m;
        }
        memset(tmp,0,sizeof(tmp));
        for(i=0; i<2; i++) 
        for(j=0; j<2; j++) 
        for(k=0; k<2; k++)
                    tmp[i][j]=((tmp[i][j]+fib[i][k]*fib[k][j]))%m;
        for(i=0; i<2; i++) 
        for(j=0; j<2; j++) 
        fib[i][j]=tmp[i][j]%m;
        n/=2;
    }
    return (ret[0][1]%m);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    long long int n,m,c;
    scanf("%lld%lld",&n,&m);
    m=2<<(m-1);
    c=fibonacci(n+1,m);
    printf("%lld\n",(c%m));
    }
    return 0;
}
