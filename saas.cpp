#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
int t,i,n;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
int a,b[1000]={0};
for(i=0;i<n;i++)
{
scanf("%d",&a);
b[a]++;
}
int max=b[0];
int k=-1;
for(i=1;i<n;i++)
{
if(b[i]!=0)
{
if(b[i]>max&&b[i]%i==0)
{
max=b[i];
k=i;
}
}

}
printf("%d\n",k);
}
return 0;
}
