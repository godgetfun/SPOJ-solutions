#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    while(1)
    {
            int a[3];
            cin>>a[0]>>a[1]>>a[2];
            if(a[0]==0&&a[1]==0&&a[2]==0)
            break;
            else
            {
            sort(a,a+3);
            if((a[0]*a[0])+(a[1]*a[1])==(a[2]*a[2]))
            cout<<"right"<<endl;
            else cout<<"wrong"<<endl;}
            }
            return 0;
            }
