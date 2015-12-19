#include<cstdio>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n,i;
		scanf("%lld",&n);
		long long k=1;
		long long l=3;
		if(n==3||n==4)
		{
			printf("3\n");
			continue;
		}
		for(i=5;i<=n;i+=2*k)
		{	
			l++;
			k*=2;
		}
		printf("%d\n",l);
	}
	
	return 0;
}