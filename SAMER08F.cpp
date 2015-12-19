#include<stdio.h>
int main()
{
    int t;
    while(1)
    {                       scanf("%d",&t);
                            if(t==0) break;
                            else
                            {
                            int i,sum=0;
                            for(i=1;i<=t;i++)
                            {
                                             sum+=i*i;
                            }
                            printf("%d\n",sum);
                            }
                            
    }
    return 0;
}
