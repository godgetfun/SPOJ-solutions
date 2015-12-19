#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long int n;
	long int arr[100000][3];
	long int i,flag,temp,jerk;
	while(1)
	{
		scanf("%ld",&n);
		if(n==0)
		break;
		for(i=0;i<n;i++)
		{
			scanf("%ld%ld%ld",&arr[i][0],&arr[i][1],&arr[i][2]);
		}
				arr[0][2]+=arr[0][1];
                arr[1][0]+=arr[0][1];
                flag=min(arr[1][0],arr[0][1]);
                temp=min(flag,arr[0][2]);
                arr[1][1]+=temp;
                flag=min(arr[1][1],arr[0][1]);
                temp=min(flag,arr[0][2]);
                arr[1][2]+=temp;
                for(i=2;i<n;i++)
				{
                                 arr[i][0]+=min(arr[i-1][0],arr[i-1][1]);
                                 flag=min(arr[i][0],arr[i-1][1]);
    						     temp=min(arr[i-1][0],arr[i-1][2]);
                                 arr[i][1]+=min(flag,temp);
                                 flag=min(arr[i][1],arr[i-1][1]);
                		         temp=min(flag,arr[i-1][2]);
                                 arr[i][2]+=temp;
                }
                printf("%ld\n",arr[n-1][1]);
	}
	return 0;
}
