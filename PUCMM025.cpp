#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char f[500000];
    while(scanf("%s",f)!=EOF)
    {                        
                             int i,rem,dig=0,l,j,sum=0,n[500000];
                             int h[10]={0,0,0,0,0,0,0,0,0,0};
                             l=strlen(f);
                             for(i=0;i<l;i++)
                             {++h[(int)(f[i]-48)];
                             n[i]=(int)(f[i]-48);
                             sum+=(int)(f[i]-48);}
                             if(h[1]>0)
                             dig+=h[1];
                             if(h[2]>0)
                             {if(n[l-1]%2==0)
                              dig+=h[2];}
                              if(h[3]>0)
                             {if(sum%3==0)
                              dig+=h[3];}
                              if(h[9]>0)
                              {if(sum%9==0)
                               dig+=h[9];}
                               if(h[5]>0)
                               {if((n[l-1]==0)||(n[l-1]==5))
                                dig+=h[5];}
                                if(h[7]>0)
                                {for(i=0;i<l-1;i++)
                                {                 int q;
                                                  q=rem*3+h[i+1];
                                                  rem=q%7;
                                }if(rem==0) dig+=h[7];}
                                if(h[4]>0)
                                {int chc;
                                chc=n[l-1]+10*n[l-2];
                                if(chc%4==0)
                                dig+=h[4];}
                                if(h[8]>0)
                                {int chc1;
                                chc1=n[l-1]+10*n[l-2]+100*n[l-3];
                                if(chc1%8==0)
                                dig+=h[8];}
                        
                             
                             printf("%d\n",dig);
    }
                             return 0;
}
                              
