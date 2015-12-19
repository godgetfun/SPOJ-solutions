#include<cstdio>
#include<iostream>

using namespace std;
int main()
{
    int n,k,count=0,i;
    scanf("%u %u",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%u",&a[i]);
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        int flag=0,mid;
    
        int lb=0,ub=n-1;
        while(lb<=ub)
        {
            mid=(lb+ub)/2;
            if(a[mid]==a[i]+k)
            {
                flag=1;
                break;
            }
            else if(a[mid]>a[i]+k)
                ub=mid-1;
            else
                lb=mid+1;
        }
        if(flag==1)
            count+=1;
    }
    printf("%u\n",count);
    return 0;
}





