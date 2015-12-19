#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {        
    int n,i,j;
    scanf("%d",&n);
    int a[n],b[n];
    int sum=0;
    for(j=0;j<n;j++)
    {
                    scanf("%d",&a[j]);
    }
    for(j=0;j<n;j++)
    {
                    scanf("%d",&b[j]);
    }
    sort(a,a+n);
    sort(b,b+n);
    for(i=0;i<n;i++)
    {
                    sum+=a[i]*b[i];
    }
    printf("%d\n",sum);
    }
    return 0;
}
    
                      
                    
