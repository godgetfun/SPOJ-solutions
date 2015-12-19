#include<cstdio>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int res=1;
		int h,a;
		scanf("%d%d",&h,&a);
		h+=3;
		a+=2;
		while(1)
		{
			if(h>5&&a>10)
			{
				h-=5;
				a-=10;
			}
			else
			{
				h-=20;
				a+=5;
			}
			if(h<=0||a<=0)
			break;
			h+=3;
			a+=2;
			res+=2;
		}
		printf("%d\n",res);	
	}
	return 0;
}
