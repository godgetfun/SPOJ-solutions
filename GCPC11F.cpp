#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int test,j;
    cin>>test;
    cin.ignore();
    while(test--)
    {
    char a[1000];
    int b[27]={0};
    int max,i,diff,d;
    gets(a);
    int l=strlen(a);
    max=b[0];
    for(i=0;i<l;i++)
    {
                    if(a[i]!=' ')
                    {
                               int x=a[i]-65;
                               b[x]++;
                               if(b[x]>max)
                               {max=b[x];
                               diff=x;}
                    }
    }
    sort(b,b+26);
    if(b[25]==b[24])
    printf("NOT POSSIBLE\n");
    else
    {
    if(diff>=4)
    d=diff-4;
    else
    d=22+diff;
    printf("%d ",d);
    for(i=0;i<l;i++)
    {
                    if(a[i]==' ')
                    printf(" ");
                    else
                    printf("%c",(char)(65+(((a[i]-65)-(d-26))%26)));
                    
    }
    printf("\n"); 
    }
    }              
    return 0;
}
    
