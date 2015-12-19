#include<stdio.h>


int main()
{
  int i,j,k;
  long long  int T,N;
  long long int c;
  
  scanf("%lld",&T);
  while(T--)
  {
     scanf("%lld",&N);
     c=(N*(N+2)*(2*N+1))/8;
     printf("%lld\n",c);
  }

return 0;
}

