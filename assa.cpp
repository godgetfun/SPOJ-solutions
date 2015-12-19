#include <stdio.h>
void multiply(long long int F[2][2],long long int M[2][2],long long,long long *sum);
void power(long long int F[2][2],long long int n, long long,long long *sum);
long long int fib(long long int n,long long int m,long long *sum)
{
  long long int F[2][2]={{1,1},{1,0}};
  if(n==0)
  return 0;
  power(F,n-1,m,&sum);
  return F[0][0];
}
 

void power(long long int F[2][2], long long int n,long long int m,long long *sum)
{
  sum+=F[0][0];
  if(n==0||n==1)
  return;
  long long int M[2][2]={{1,1},{1,0}};
  power(F,n-1,m,&sum);
  multiply(F, M,m,&sum);
}
 
void multiply(long long int F[2][2],long long int M[2][2],long long int m,long long *sum)
{
  long long x,y,z,w;
  x=(F[0][0]*M[0][0]+F[0][1]*M[1][0])%m;
  y=(F[0][0]*M[0][1]+F[0][1]*M[1][1])%m;
  z=(F[1][0]*M[0][0]+F[1][1]*M[1][0])%m;
  w=(F[1][0]*M[0][1]+F[1][1]*M[1][1])%m;
 
  F[0][0]=x;
  F[0][1]=y;
  F[1][0]=z;
  F[1][1]=w;
}
int main()
{
    long long *sum;
    *sum=0;
    int t;
    scanf("%d",&t);
    while(t--)
    {
    long long int n,m,c,m1,sum;
    m=1000000006;
    m1=1000000007;
    scanf("%lld",&n);
    c=fib(n+2,m,&sum);
    printf("%lld %lld\n",c,*sum);
    }
    return 0;
}


