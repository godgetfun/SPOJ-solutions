#include<cstdio>
#incude<algorithm>
using namespace std;
int main()
{
    while(scanf("%d",a[0])!=EOF)
    {
    int a[10];
    for(i=1;i<10;i++)
    {scanf("%d",&a[i]);
    if(sum<100)
    sum+=a[i];
    j=i;}
    tum=sum-a[j-1];
    if((100-tum)>=(sum-100))
    printf("%d\n",sum);
    if((100-tum)<(sum-100))
    printf("%d\n",tum);
    }
    return 0;
}
    
    
