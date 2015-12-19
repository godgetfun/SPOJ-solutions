#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    long int a[4];
    int n=1;
     while(scanf("%ld",&a[0])!=EOF)
     {
                                scanf("%ld%ld%ld",&a[1],&a[2],&a[3]);
                                sort(a,a+4);
                                printf("Case %d: %ld\n",n,(a[3]+a[2]));
                                n++;
     }
     return 0;
}
                                
