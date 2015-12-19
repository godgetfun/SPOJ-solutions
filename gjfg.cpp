#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	long long a[4],s;
	int i,m=1;
	while(scanf("%lld ",&a[0])!=EOF)
	{ 
	  for(i=1;i<4;i++)
	  {
  		scanf("%lld ",&a[i]);
  	}
  	sort(a,a+4);
  	s=a[3]+a[2];
  	printf("Case %d: %lld\n",m,s);
  	m++;
	}
	return 0;
}
