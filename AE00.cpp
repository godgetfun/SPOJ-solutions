#include<cstdio>
int main()
{
    long int n;
    while(scanf("%ld",&n)!=EOF)
    {
                               long sum=0;
                               for(long i=1;i<=n;i++)
                               {
                                                long j=1;
                                                while(i*j<=n)
                                                {
                                                             if(j>=i)
                                                             sum++;
                                                             j++;
                                                }
                               }
                               printf("%ld\n",sum);
    }
    return 0;
}
                                                
                                                             
                               
