#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{ int t;
scanf("%d",&t);
while(t--)
{         char str[500000];
          int t2=0,t5=0,l,i,h[500000],sum=0;
          scanf("%s",str);
          l=strlen(str);
          for(i=0;i<l;i++)
          {h[i]=(int)(str[i]-48);
          sum+=h[i];}
          int rem;
          rem=h[0];
          int chc;
          chc=h[l-1]+10*h[l-2];
          if(sum%3==0)
          {
                      for(i=0;i<l-1;i++)
                      {                 int q;
                                      q=rem*3+h[i+1];
                                      rem=q%7;
                      }if(rem==0)
                      {
                                 if(chc%4==0)
                                 {
                                             if(sum%9==0)
                                             t2=1;
                                 }
                                 if(chc%25==0)
                                 t5=1;
                      }
          }
          if(t2==1)
          printf("Yes ");
          else printf("No ");
          if(t5==1)
          printf("Yes\n");
          else printf("No\n");
}
return 0;
}
