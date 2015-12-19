#include<cstdio>
#include<cmath>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              long long x,y,z;
              scanf("%lld%lld%lld",&x,&y,&z);
              long long d=x*x+y*y+2*y*z;
              if(d<0)
              printf("Not this time.\n");
              else
              {
                  long long int flag=(long long int)sqrt(d);
                  if(flag*flag!=d)
                  printf("Not this time.\n");
                  else
                  {
                      long long int root;
                      root=2*z*x+2*z*flag;
                      long long int toor=2*(y+2*z);
                      if(root%toor!=0)
                      printf("Not this time.\n");
                      else
                      printf("%lld\n",root/toor);
                  }
              }
    }
    return 0;
}
