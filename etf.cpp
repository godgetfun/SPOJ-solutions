#include<cstdio>

long int gcd(long int m,long int n)
{
         while(m!=n)
         {
         if(m>n)
         m=m-n;
         else
         n=n-m;
         }
         return(m); 
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              long int n,c=1,i;
              scanf("%ld",&n);
              for(i=2;i<n;i++)
              {
                              if(gcd(i,n)==1)
                              c++;
              }
              printf("%ld\n",c);
    }
    return 0;
}
              
