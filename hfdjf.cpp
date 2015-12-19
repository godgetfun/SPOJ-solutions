#include<cstdio>
#include<conio.h>
#include<algorithm>
using namespace std;
int main()
{
    long long a[4],m=1,i;
	while(scanf("%lld ",&a[0])!=EOF)
	{ 
	  for(i=1;i<4;i++)
	  {
  		scanf("%lld ",&a[i]);
  	}
       sort(a,a+4);
       printf("Case %lld: %lld\n",m,(a[2]+a[3]));
       }
                return 0;
                getch();
                }
