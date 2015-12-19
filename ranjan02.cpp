#include<cstdio>
long long power(long long int a, long long int b)
{
  long long pow = 1;
  while(b) 
  {
         if (b&1) 
         {
           pow*=a;
           --b;
         }
         a=a*a;
         b=b/2;
  }
  return pow;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              long long int n;
              scanf("%lld",&n);
              if(n==0)
              printf("0\n");
              else
              printf("%lld\n",(power(3,n)-1));
    }
    return 0;
}
              
