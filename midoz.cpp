#include<cstdio>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,i,sum=0,c;
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%d",&c);
			sum+=(c/k);	
		}
		printf("%d\n",sum);
		
	}
	return 0;
}