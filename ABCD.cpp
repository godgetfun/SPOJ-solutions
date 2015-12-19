#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    char a[2][2*n];
    for(int i=0;i<2*n;i++)
            cin>>a[0][i];
    int c[4]={0};
    c[(int)a[0][0]-65]=1;
    c[(int)a[0][1]-65]=1;
    for(int i=0,j=0;i<4;i++)
    {
            if(c[i]==0)
            {
                           a[1][j]=(char)(i+65);
                           j++;
            }
    }
    for(int k=2;k<2*n;k=k+2)
    {
            c[0]=0;
            c[1]=0;
            c[2]=0;
            c[3]=0;
            c[(int)a[0][k]-65]=1;
            c[(int)a[0][k+1]-65]=1;
            for(int i=0,j=0;i<4&&j<2;i++)
            {
                    if(c[i]==0)
                    {
                           a[1][k+j]=(char)(i+65);
                           j++;
                    }
            }
            
            if(a[1][k-1]==a[1][k])
            {
                                  char temp=a[1][k];
                                  a[1][k]=a[1][k+1];
                                  a[1][k+1]=temp;
            }
            
    }
    
    for(int i=0;i<2*n;i++)
    cout<<a[1][i];
    printf("\n");
    return 0;
}
            
    
    
         