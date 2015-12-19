#include<cstdio>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int c[101]={0};
		int m,n,res=0,i,j;
		scanf("%d%d",&n,&m);
		int a[n][m];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				int k;
				k=a[i][j];
				if(k==-1)
				continue;
				if(c[k]>=1)
				continue;
				c[k]++;
				if(i+1<n&&a[i+1][j]==k)
				{
					res++;
				}
				else if(i-1>=0&&a[i-1][j]==k)
				{
					res++;	
				}
				else if(j+1<m&&a[i][j+1]==k)
				{
					res++;
				}
				else if(j-1>=0&&a[i][j-1]==k)
				{
					res++;
				}
				else if((i-1>=0)&&(j-1>=0)&&(a[i-1][j-1]==k))
				{
					res++;
				}
				else if((i-1>=0)&&(j+1<m)&&(a[i-1][j+1]==k))
				{
					res++;
				}
				else if((i+1<n)&&(j-1>=0)&&(a[i+1][j-1]==k))
				{
					res++;
				}
				else if((i+1<n)&&(j+1<m)&&(a[i+1][j+1]==k))
				{
					res++;
				}
				else c[k]--;
			}
		}
		printf("%d\n",res);	
	}
	return 0;
}