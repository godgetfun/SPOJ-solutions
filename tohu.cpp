#include<cstdio>

int main()
{
    int t;
    long long int n;
    double res; 
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n==1)
        {
            res=2.0/3.0;
        }
        else
        {
            res=3.0/4.0-(1.0/(2*(n+1)))+(1.0/(2*(n+2)));
        }
        printf("%.11f\n",res);
    }
    return 0;
}
