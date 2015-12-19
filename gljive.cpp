#include<cstdio>

using namespace std;
int main()
{
    int a[10];
    while(scanf("%d",&a[0])!=EOF)
    {
    int i,sum=0,tum=0,j;
    sum+=a[0];
    for(i=1;i<10;i++)
    {scanf("%d",&a[i]);
    if(sum<100)
    {sum+=a[i];
    j=i;}}
    tum=sum-a[j];
    if((100-tum)>=(sum-100))
    printf("%d\n",sum);
    if((100-tum)<(sum-100))
    printf("%d\n",tum);
    }
    return 0;
}
    
    
