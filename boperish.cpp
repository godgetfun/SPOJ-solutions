#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    while(1)
    {       
            int n,i;
            cin>>n;
            int a[n];
            if(n==0) 
            break;
            else
                for(i=0;i<n;i++)
            cin>>a[i];
            sort(a,a+n);
            for(i=1;i<=n;i++)
            {
                   if(a[n-i]<i)
                   break;
            }
            cout<<i-1<<endl;
            
    }
    return 0;
}
            
