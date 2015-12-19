#include<iostream>
#include<algorithm>
using namespace std;
long long gcd(long long m,long long n)
{
    if(m<0)
    m=-m;
    if(n<0)
    n=-n;
while(m!=n) 
{
if(m>n)
m=m-n; 
else
n=n-m;
}
return(m);
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long x,y,z,ma,gc;
		scanf("%lld%lld%lld",&x,&y,&z);
		ma=max(x,y);
		//printf("%lld\n",ma);
		if(z>ma)
		{
			printf("NO\n");
			continue;
		}
		gc=gcd(x,y);
		//printf("%lld\n",gc);
		if((z%gc)==0)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}