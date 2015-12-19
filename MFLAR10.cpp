#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    while(1)
    {
                     string a;
                     char ch;
                     int c,i,j=0,b,q,k,flag=0;
                     getline(cin,a);
                     if(a[0]=='*')
                     break;
                     q=a.size();
                     for(;;j++)
                     {
                                  if(a[j]==' ')
                                  continue;
                                  else
                                  break;
                     }
                     for(k=q-1;;k--)
                     {
                                   if(a[k]==' ')
                                   continue;
                                   else
                                   break;
                     }
                     a[k+1]='\0';
                     ch=tolower(a[j]);
                     for(i=j+1;i<k;i++)
                     {
                                       if(a[i]==' ' && a[i+1]==' ') continue;
                                       else
                                       if(a[i]==' ' && tolower(a[i+1])!=ch)
                                       {
                                                  flag=1;
                                                  break;
                                       }
                     }
                     if(flag==1)
                     printf("N\n");
                     else
                     printf("Y\n");
    }
    return 0;
}
                                     
    
