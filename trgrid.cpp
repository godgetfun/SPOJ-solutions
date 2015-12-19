#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
              long long int n,m;
              cin>>n>>m;
              if((n%2==0)&&(m%2==0))
              {
                        if(n==m)
                        printf("L\n");
                        else if(n>m)
                        printf("U\n");
                        else
                        printf("L\n");
              }
              else if((n%2!=0)&&(m%2!=0))
              {
                        if(n==m)
                        printf("R\n");
                        else if(n>m)
                        printf("D\n");
                        else
                        printf("R\n");
              }
              else if((n%2!=0)&&(m%2==0))
              {
                        if(n>m)
                        printf("U\n");
                        else
                        printf("R\n");
              }
              else if((n%2==0)&&(m%2!=0))
              {
                        if(n>m)
                        printf("D\n");
                        else
                        printf("L\n");
              }
    }
    return 0;
}
       
