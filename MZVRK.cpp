#include<cstdio>
int main()
{
    long long m;  
    while(scanf("%lld",&m)!=EOF)
    {
                                long long num,n,sum=0;
                                scanf("%lld",&n);
                                
    for(num=m;num<=n;num++)
    {
         if(num%2!=0)
         sum+=1;
         else {
          long long k=1,i,c;
          c=(num&1);
          if(c==1)
          sum+=1;
          else
          {
          while(1)
          {
                k=k<<1;
                c=num&k;
                if(k==c)
                {
                                    sum+=k;
                                   break;
                }                  
          
          }
          }
          }
    }
   printf("%lld",sum);
}

    return 0;
}

 #include<iostream>
 using namespace std;
 int main()
 {
    unsigned long long int m,n,sum;
    while(scanf("%lld%lld",&m,&n)!=EOF)
    {
              sum=0;
              while(m!=(n+1))
              {
                     sum+=(m&(-m));
                      m++;
              }
              printf("%lld\n", sum);
    }
    return 0;
}

