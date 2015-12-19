#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
              char a[1000][100];
              int b[1000][26];
              int l[1000];
              int n;
              scanf("%d",&n);
              for(j=0;j<n;j++)
              {
                              gets(a[j]);
                              l[j]=strlen(a[j]);
                              for(i=0;i<l[j];i++)
                              {
                              if(a[j][i]!=' ')
                              b[j][(int)(a[j][i]-65)]++;
                              if(isupper(a[j][i])
                              tolower(a[j][i]);
                              }
              }
              
              
              
              
    }
    return 0;
}                
                              
                              
