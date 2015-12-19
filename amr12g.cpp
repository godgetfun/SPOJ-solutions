#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
              int n,m,k;
              int sum=0;
              cin>>n>>m>>k;
              int on[50]={0};
              char a[n*m];
              for(int i=0;i<n*m;i++)
              {
                      scanf("%c",&a[i]);
              }
              for(int i=0;i<n;i++)
              for(int j=0;j<m;j++)
              {
              
              }
              sort(on,on+n);
              for(int K=0;K<k;K++)
              {
                              on[0]=m-on[0];
                              sort(on,on+n);
              }
              for(int Q=0;Q<n;Q++)
              {
                              sum+=on[Q];
              }
              printf("%d\n",sum);

    getch();
    return 0;
}
                              
                                              
