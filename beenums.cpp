#include<cstdio>
int main()
{
    while(1)
    {
            long long int n,i,sum=1;
            scanf("%lld",&n);
            if(n==-1)
            break;
            else if(n==1)
            {
             printf("Y\n");
             continue;
            }
            else
            i=1;            
            while(1)
            {
                    sum+=6*i;
                    if(sum==n)
                    {printf("Y\n");
                    break;}
                    else
                    if(sum>n)
                    {printf("N\n");
                    break;}
                    else
                    {i++;
                    continue;}
            }
    }
    return 0;
    
}
                         
                
