#include<cstdio>
#include<cmath>
int main()
{
    int t;
    long long int num,temp,n,i,j,res,k,rem;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&num);
        temp=0,n=0;
        while(temp<num)
        {
            n=n+1;
            temp=pow(2,n+1)-2;
        }
        temp=pow(2,n)-2;
        res=num-temp-1;
        char a[100000];
        
        int k=-1;
        while(res>0)
        
        {
            rem=res%2;
            k=k+1;
            a[k]=rem+53;
            res=res/2;
        }
        j=n-k-1;
        for(i=1;i<=j;i++)
            printf("5");
        for(i=k;i>=0;i--){
            printf("%c",a[i]);
        }
        printf("\n");
    }
    return 0;
}
 
