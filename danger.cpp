#include<cstdio>
#include<cmath>
#include<cstring>
int main()
{
    while(1)
    {
            char str[10];
            scanf("%s",str);
            if(strcmp(str,"00e0")==0)
            break;
            long long int n,i,sum=0;
            n=(10*(str[0]-48)+(str[1]-48))*(long long)pow(10,(int)(str[3]-48));
            for(i=0;;i++)
            {
                         sum+=pow(2,i);
                         if(sum>n)
                         {
                                  sum-=pow(2,i);
                                  break;
                         }
                         else if(sum==n)
                         {
                         printf("%lld\n",n);
                         break;
                         }
            }
            if(sum!=n)
            {
                      sum++;
                      
                      long long int k=-1;
                      for(i=sum;i<=n;i++)
                      {
                                         k+=2;
                      }
                      printf("%lld\n",k);
            }
    }
    return 0;
} 
            
