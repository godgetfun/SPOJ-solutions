#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
                              int a[100];
                              int b[100];
                              int c[100000]={0};
                              int i,k=0;
                              for(i=0;i<n;i++)
                              {
                                              int t;
                                              cin>>a[i];
                                              if(c[a[i]]==0) 
                                              {
                                                            c[a[i]]=1;
                                                            k++;
                                              }
                                              cin>>t;
                                              int j;
                                              for(j=0;j<t;j++)
                                              {
                                                              cin>>b[j];
                                                              if(c[b[j]]==0)
                                                              {
                                                                              c[b[j]]=1;
                                                                              ++k;
                                                              }
                                              }
                              }
                              printf("%d\n",k-n);
    
    return 0;
}
                                              
