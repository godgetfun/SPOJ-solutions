#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int a[100000];
long n;
while(scanf("%ld",&n)!=0)
{
    int i=0;
    if(n==0) 
    return 0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int flg=0;
    for(i=0;i<n;i++)
        {
            if(a[a[i]-1]==i+1)
            flg++;
        }
        if(flg==n)
        printf("ambiguous\n");
        else
        printf("not ambiguous\n");
}
return 0;
}
