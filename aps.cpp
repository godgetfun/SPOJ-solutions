#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#define ll long long
#define mx7 10000007
#define mx6 1000006
//...........................................//
//input
#define si(t) scanf("%d",&t)
#define sl(t) scanf("%lld",&t)
#define sf(t) scanf("%f",&t)
#define sdb(t) scanf("%lf",&t)
#define schar(c) scanf("%c",&c)
#define sstr(s) scanf("%s",s)
#define ssi(a,b) scanf("%d%d",&a,&b)
#define ssl(a,b) scanf("%lld%lld",&a,&b)
//...........................................//
//Output
#define pi(a) printf("%d\n",a)
#define pl(a) printf("%lld\n",a)
#define pf(a) printf("%f\n",a)
#define pdb(a) printf("%lf\n",a)
//...........................................//
using namespace std;
ll pd[mx7+10],a[mx7+10];
bool prime[mx7+10];

void sieve(){
	ll i,j;
	for (i=2;i<=mx7;i+=2){
		prime[i]=1,
		   pd[i]=2;
	}
	for(i=3;i<=mx7;i+=2){
		if(!prime[i]){
			pd[i]=i;
			for(j=i;j*i<=mx7;j+=2){
				prime[j*i]=1;
				if(!pd[j*i])
				pd[j*i]=i;
			}
		}
	}
}

void solve(){
	a[0]=0;
	a[1]=0;
	ll i,j;
	for(i=2;i<=mx7;i++){
		a[i]=a[i-1]+pd[i];
	}
}
int main(){
	int t;
	sieve();
	solve();
	si(t);
	while(t--){
		int n;
		si(n);
		pl(a[n]);
	}
	return 0;
}
