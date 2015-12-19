#include<iostream>
using namespace std;
int main()
{
    int i,n,m;
    cin>>n;
    while(n!=EOF)
    {
    cin>>m;
    int a[m][4];
    for(i=0;i<m;i++)
    {scanf("%d%d%d%d",&a[i][0],&a[i][1],&a[i][2],&a[i][3]);} 
    if(((a[0][1]>=a[0][2]&&a[0][1]==a[0][3])||(a[0][1]<a[0][2]&&a[0][2]==a[0][3]))&&((a[1][1]>=a[1][2]&&a[1][2]==a[1][3])||(a[1][1]<a[1][2]&&a[1][1]==a[1][3])))
    {for(i=0;i<n;i++)
    {cout<<i+1;}
    cout<<endl;}
    else
    cout<<"-1"<<endl;}
    return 0;
}
    
