#include<cstdio>
#include<iostream>
using namespace std;
#include<cstring>
int main()
{
	int t,i,l;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		char a[315];
		int c[26]={0};
		gets(a);
		l=strlen(a);
		for(i=0;i<l;i++)
		{
			if((a[i]>=65&&a[i]<=90))
			c[a[i]-65]=1;
			if(a[i]>=97&&a[i]<=122)
			c[a[i]-97]=1;	
		}
		for(i=0;i<26;i++)
		{
			if(c[i]==0)
			{
				printf("%c\n",i+65);
				break;
			}
		}
		if(i==26)
		printf("~\n");
	}	
	return 0;
}