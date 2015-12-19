#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
              char str[100];
              int b[100];
              int i;
              for(i=0;i<99;i++)
              cin>>b[i]>>str[i];
              int k=0;
              int a[10];
              for(i=0;i<99;i++)
              {
                               if((b[i]%9==0)&&(b[i]!=99)&&(b[i]!=90))
                               {a[k]=(int)str[i];
                               k++;}
              }
              int temp=a[0];
              for(i=1;i<k;i++)
              {
                              if(a[i]!=temp)
                              {
                                            printf("NO\n");
                                            break;
                              }
              }
              if(i==k)
              printf("YES\n");
    }
    return 0;
}
              
