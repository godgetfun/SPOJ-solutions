#include<cstdio>


void multiply(long long int F[2][2],long long int M[2][2],long long);
void power(long long int F[2][2],long long int n, long long);
long long int fib(long long int n,long long int m)
{
  long long int F[2][2]={{1,1},{1,0}};
  if(n==0)
  return 0;
  power(F,n-1,m);
  return F[0][0];
}
 

void power(long long int F[2][2], long long int n,long long int m)
{
  if(n==0||n==1)
  return;
  long long int M[2][2]={{1,1},{1,0}};
  power(F,n/2,m);
  multiply(F,F,m);
  if(n%2!=0)
  multiply(F, M,m);
}
 
void multiply(long long int F[2][2],long long int M[2][2],long long int m)
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
void multiply1(long long int F[2][2],long long int M[2][2]);
void power1(long long int F[2][2],long long int n);
long long int fib1(long long int n)
{
  long long int F[2][2]={{1,1},{1,0}};
  if(n==0)
  return 0;
  power1(F,n-1);
  return F[0][0];
}
 

void power1(long long int F[2][2], long long int n)
{
  if(n==0||n==1)
  return;
  long long int M[2][2]={{1,1},{1,0}};
  power1(F,n/2);
  multiply1(F,F);
  if(n%2!=0)
  multiply1(F, M);
}
 
void multiply1(long long int F[2][2],long long int M[2][2])
{
  long long x,y,z,w;
  x=(F[0][0]*M[0][0]+F[0][1]*M[1][0]);
  y=(F[0][0]*M[0][1]+F[0][1]*M[1][1]);
  z=(F[1][0]*M[0][0]+F[1][1]*M[1][0]);
  w=(F[1][0]*M[0][1]+F[1][1]*M[1][1]);
 
  F[0][0]=x;
  F[0][1]=y;
  F[1][0]=z;
  F[1][1]=w;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    long long int n,m,c;
    scanf("%lld",&n);
    m=1000000007;
    c=fib1(n);
    long long int d=fib(c,m);
    printf("%lld\n",(d%m));
    }
    return 0;
}

