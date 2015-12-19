#include<stdio.h>
#include<iostream>



int main()
{
int t;
scanf("%d",&t);
while(t--)
{
          long long int a3,l3,sum,a,d,n,term;
          scanf("%lld%lld%lld",&a3,&l3,&sum);
          n = (2*sum)/(a3+l3);
          d = (l3-a3)/(n-5);
          a = a3-(2*d);
          term = a;
          printf("%lld\n",n);
          for(int i=0;i<n;i++)
                  {
                  printf("%lld ",term);
                  term+=d;
                  }
                  printf("\n");
}
return 0;
}
