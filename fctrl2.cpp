#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
              int n,k,j;
           cin>>n;
           int a[10000];
           a[0]=1;
           k=0;
           for(j=n;j>=2;j--)
           { 
                            int flag=0;
                            for(int i=0;i<=k;i++)
                            {
                            flag+=a[i]*n;
                            a[i]=flag%10;
                            flag/=10;
                            }
                            while(flag!=0)
                            {
                                          
                                          a[++k]=flag%10;
                                          flag/=10;
                            }
                            n--;
           }
           for(int i=k;i>=0;i--)
           cout<<a[i];
           cout<<endl;
           
    }
    return 0;
}
           
                
