#include<cstdio>
#include<iostream>
using namespace std;

char a[251][251];
int k,k_max,v,v_max;
int n,m;

void dfs(int i, int j) {
    if (a[i][j]=='k') 
		k++;
    else if (a[i][j]=='v') 
		v++;
    a[i][j] = '#';
    if(i>0 && a[i-1][j]!='#') 
		dfs(i-1, j);
    if(i+1<n && a[i+1][j]!='#') 
		dfs(i+1, j);
    if(j>0 && a[i][j-1]!='#') 
		dfs(i,j-1);
    if(j+1<m && a[i][j+1]!='#') 
		dfs(i,j+1);
}
void dfstraversal(int n,int m){
	int i,j;
	for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if (a[i][j]!='#') {
                dfs(i,j);
                if (k>v) 
				k_max+=k;
                else v_max+=v;
                k=v=0;
            }
        }
    }
}
int main()
{
	int i,j;
    scanf("%d %d", &n, &m);
    for (i=0;i<n;i++) {
        scanf("%s\n", a[i]);
    }
    dfstraversal(n,m);
    
    printf("%d %d\n", k_max, v_max);
    return 0;
}