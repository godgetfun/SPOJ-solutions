#include <stdio.h>
int main()
{
    int t; 
     scanf("%d", &t);
    while (t--)
    {
           int n; 
           long long int k; 
           int res;
           int temp;
           long long int a[10000]={0};     
           scanf("%d%lld",&n,&k);
           temp = n;
           while (temp--) 
           { 
                 a[temp]=k; 
                 k=(k+1)/2; 
           } 
        res=1;
        while(temp++<n-1)
        {
            if (a[temp]==a[temp-1]*2) 
            res =0;
        }
        if(res==1)
        printf("Male\n");
        else printf("Female\n");
    }
    return 0;
}
