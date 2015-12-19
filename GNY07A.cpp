#include<stdio.h>
#include<string.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
              int l,i,b;
              char a[85];
              scanf("%d%s",&b,a);
              l=strlen(a);
              for(i=b;i<l;i++)
              {
                    a[i-1]=a[i];
              }
                    a[l-1]='\0';
              printf("%d %s\n",j,a);
              
    }
    return 0;
}                  
