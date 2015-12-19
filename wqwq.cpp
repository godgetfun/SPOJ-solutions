#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
int i;
int a[5]={4,2,3,6,0};
sort(a,a+5);
for(i=0;i<5;i++)
{
printf("%d",a[i]);
}
return 0;
}
