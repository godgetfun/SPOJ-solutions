#include <stdio.h>
#include <cstdlib>
#include<iostream>
#include<algorithm>
#define limit 100000
using namespace std;
  int primes[limit]={0};
void check(void)
{
	
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--) {
    unsigned long long int i,j,m,n;
    scanf("%lld%lld",&m,&n);
    if(m==1)
    m++;
    for (i=m;i<=n;i++)
        if (!primes[i])
            for(j=i*i;j<limit;j+=(i<<1))
            	if((i*j)>n)
            	break;
            	else
                primes[i*j]=1;

    for (i=m;i<=n;i++)
        if (!primes[i])
            printf("%d\n",i);
	}

return 0;
}
