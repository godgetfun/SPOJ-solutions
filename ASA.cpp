#include<cstdio>
#include<iostream>
using namespace std;
int main() 
{
    int t,n,u;
    int cn[110]={0};
    cin>>t;
    while(t--) 
    {
               cin>>n;
               for(int i=0;i<n;i++)
               {
                               cin>>u;
                               cn[u]++;
               }
               int i,r=-1,v=-1;
               for(i=0;i<=100;i++) 
               if(cn[i] && !(cn[i]%i) && (cn[i]>r || (cn[i]==r && i<v))) 
               {
                        r=cn[i];
                        v=i;
               }
               cout<<v<<'\n';
    }
    return 0;
}
