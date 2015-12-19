#include<iostream>
#include<algorithm>
using namespace std;
void check(int x,int y,int a[])
{
    int j;
    int b[y-x+1];
    for(j=x;j<=y;j++)
    b[j]=a[j];
    sort(b+x,b+y+1);
    cout<<b[y]+b[y-1]<<endl;
}
int main(){
    int N,Q,x,y,max1,max2,temp;
    char X;
    cin>>N;
    int A[N+1];
    for(int i=1;i<=N;i++)
    {
        cin>>A[i];
    }
    cin>>Q;
    for(int i=0;i<Q;i++)
    {
        cin>>X>>x>>y;
        if(X=='U')
        {
            A[x]=y;
        }
        else
        check(x,y,A);

    }
    return 0;
}
