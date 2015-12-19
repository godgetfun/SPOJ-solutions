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
