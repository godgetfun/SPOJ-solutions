#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {                         
                              char a[10000][3];
                              int res=1,i;
                              int b[4]={0,0,0,0};
                              for(i=0;i<n;i++)
                              {
                              scanf("%s",a[i]);
                              if(strcmp(a[i],"1/4")==0)
                              b[1]++;
                              else if(strcmp(a[i],"1/2")==0)
                              b[2]++;
                              else if(strcmp(a[i],"3/4")==0)
                              b[3]++;
                              }
                              if(b[2]%2==0)
                              res+=b[2]/2;
                              while(b[3]>0)
                              {
                                        if(b[1]>0)
                                        {
                                                  res++;
                                                  b[1]--;
                                                  b[3]--;
                                        }
                                        else
                                        {res++;
                                        b[3]--;}
                              }
                              if((b[1]>=2)&&(b[2]%2!=0))
                              {res++;
                              b[1]-=2;}
                              else if(b[2]==1) res++;
                              if(b[1]%4==0)
                              res+=b[1]/4;
                              else
                              res+=(b[1]/4)+1;
                              printf("%d\n",res);
    }
    return 0;
}
