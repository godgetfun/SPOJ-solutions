#include<cstdio>
int main()
{
     int t;
     scanf("%d",&t);
     while(t--)
     {
             long long n,k,ser,res;
             scanf("%lld",&n);
             if(n<1)
             printf("0\n");
             else
             {
             n--;
             k=n/3;
             ser=k*(k+1)/2;
             res=ser*3+(n%3)*(k+1);
             printf("%lld\n",res);
             }
     }
     return 0;
}

