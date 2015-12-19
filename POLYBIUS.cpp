#include<cstdio>
int i=0,c;main(){char s[100];scanf("%d\n",&c);while(c--){gets(s);for(i=0;s[i];i++){if(s[i]>73)s[i]-=1;if(s[i]>64)printf("%d ",2*s[i]-s[i]%5-119);}printf("\n");}}
