#include<iostream>
using namespace std;
void check(long int a[],long long int n)
{
     long long int l=2;
     long long int k=2;
     long long int j;
     while(k!=n+1)
              {
                              for(j=0;j<a[l-1]&&k!=n+1;j++)
                              {
                                                 
                                                 a[k]=l;
                                                 k++;
                              }
              l++;
              }
}
    
int main()
{
    int t,q;
    cin>>t;
    for(q=1;q<=t;q++)
    {
              long long int n;
              cin>>n;
              long int a[n];
              a[1]=1;
                  check(a,n);
                  cout<<"Case #"<<q<<": "<<a[n]<<endl;
    }
    return 0;
}
              
