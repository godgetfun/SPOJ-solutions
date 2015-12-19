#include<cstdio>
#include<cstring>
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    long int n,x,q,i,j,max,max2,r;
	char str[100];
	cin>>n>>q;
	int row[314159]={0};
	int col[314159]={0};
	max=row[0];
	max2=col[0];
	while(q--)
	{
		cin>>str>>r>>x;
		if(strcmp(str,"RowAdd")==0)
		{
			row[r-1]+=x;
			if(row[r-1]>max)
			max=row[r-1];	
		}
		else if(strcmp(str,"ColAdd")==0)
		{
			col[r-1]+=x;
			if(col[r-1]>max2)
			max2=col[r-1];	
		}
	}
	cout<<(max+max2)<<endl;
		
	return 0;
}