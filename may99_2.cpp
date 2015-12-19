#include<cstdio>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              char a[5]={'m','a','n','k','u'};
              long long n,i;
              scanf("%lld",&n);
              long long sum=0;
              long long int e=0;
              long long int k=5;
              for(i=1;;i++)
              {
                           //printf("%lld ",k);
                           sum+=k;
                           //printf("%lld\n",sum);
                           if(sum>n)
                           {
                                    sum-=k;
                                    //printf("%lld ",sum);
                                    break;
                           }
                           if(sum==n)
                           {
                                     for(int j=0;j<i;j++)
                                     printf("u");
                                     printf("\n");
                                     break;
                           }
                           k*=5;
              }
              if(sum==n)
              continue;
              long long c,d;
              c=n-sum;
              //printf("%lld\n",c);
              k/=5;
              if(n>=6)
              {
              for(i=0;k!=1;i++)
              {
                                       if(c%(k*5)==0)
                                       {
                                                     c=0;
                                                     printf("u");
                                       }
                                       else
                                       {
                                           d=(c-1)/k;
                                           c%=k;
                                           printf("%c",a[d]);
                                       }
                                       k/=5;
              }
              }
              long long temp;
              temp=n-sum;
              if(temp%5==0)
              printf("u\n");
              else
              printf("%c\n",a[(temp%5)-1]);
    }
    return 0;
}
              
                           
                           
