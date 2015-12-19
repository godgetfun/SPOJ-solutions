#include<cstdio>
#include<cstring>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	char c[50000];
	char r[50000];
	memset(r,n,n);
	memset(c,n,n);
	for(int i=0;i<1000;i++)
	printf("%d",c[i]);
	char str[20];
	int t,w;
	scanf("%s",str);
	while(m--)
	{
		if(strcmp(str,"RowQuery")==0)
		{
			scanf("%d",&t);	
			printf("%d",r[t-1]);	
		}
		else if(strcmp(str,"ColQuery")==0)
		{
			scanf("%d",&t);	
			printf("%d",c[t-1]);
		}
		else if(strcmp(str,"ColSet")==0)
		{
			int t,w;
			scanf("%d%d",&t,&w);
			if(w==0)
			c[t-1]=0;
			else
			c[t-1]=1;	
		}
		else if(strcmp(str,"RowSet")==0)
		{
			int t,w;
			scanf("%d%d",&t,&w);
			if(w==0)
			r[t-1]=0;
			else
			r[t-1]=1;	
		}
	}
	return 0;
}