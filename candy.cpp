#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    while(1)
    {       int c,i,n,res,sum=0;
            cin>>n;
            int a[n];
            if(n==-1) break;
            else
            for(i=0;i<n;i++)
            {cin>>a[i];
            sum+=a[i];}
            res=0;
            if(sum%n!=0)
            cout<<"-1"<<endl;
            else
            {sort(a,a+n);
            c=sum/n;
            for(i=0;i<n;i++)
            {
                            while(a[i]!=c)
                            {if(a[i]>c) a[i]--;
                            else a[i]++;
                            res++;}
            }
            cout<<res/2<<endl;}
            }
            return 0;
            }
            
            
