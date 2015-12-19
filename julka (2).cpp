#include<cstdio>
int main()
{
    int t=10;
    while (t--)
    {
          long long c_odd,d_odd,total,diff;
        scanf("%lld%lld",&total,&diff);
            c_odd = total%2;
            d_odd = diff%2;
            if (!c_odd && !d_odd)
                {
                       printf("%lld\n",((total/2)+(diff/2)));
                       printf("%lld\n",((total/2)-(diff/2)));
                }
            else if (c_odd && d_odd)
                {
                    printf("%lld\n",((total/2)+(diff/2)+ 1));
                    printf("%lld\n",((total/2)-(diff/2)));
                }
                else
                printf("\n");
    }
    return 0;
}
