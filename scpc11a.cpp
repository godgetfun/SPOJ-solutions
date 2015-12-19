#include<cstdio>

int main()
{
    while(1)
    {
        int a[30]={0};
        double sum=0.01;
        int n,w,x,b;
        scanf("%d%d",&n,&w);
        if(n==0&&w==0)
        break;
        int max=0,val=0;
        for(int i=0;i<n;i++)
        {
             scanf("%d",&x);
             b=x/w; 
             a[b]++;
             if(b>val)
             val=b;
        }
        for(int i=0;i<=val;i++)
        {
            if(a[i]>max)
            max=a[i];
        }
        for(int i=val;i>=0;i--)
        {
            sum+=(double)(i)/(double)(val)*(double)(a[val-i])/(double)(max);
        }
        printf("%.6f\n",sum);
    }
    return 0;
}
