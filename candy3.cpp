#include<stdio.h>
int main()
{
    long long int sum,c;
    int t,i,j,n;
    scanf("%d",&t);
    printf("\n");
    while(t--)
    {
       scanf("%d",&n);
       sum=0;
       for(j=0;j<n;j++)
       {
           scanf("%lld",&c);
           sum=(sum+c)%n;
       }

       if(sum%n==0) 
       printf("YES\n");
       else 
       printf("NO\n");
    }
    printf("\n\n");
    return 0;
}
