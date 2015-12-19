#include<iostream>
using namespace std;
int fact(int k)
{
    int i,fact=1;
    for(i=1;i<=k;i++)
    fact=fact*i;
    return fact;
}
int main()
{
    int i,n,c=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {c*=2;}
    cout<<fact(n)+c-n;
return 0;
}
