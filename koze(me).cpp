#include<cstdio>
#include<iostream>
using namespace std;
#define max 250
char a[max][max];
int k_max=0,v_max=0;
int top=-1;
int stack[100000];
int stack2[100000];
void push(int a,int b)
{
	if(top==max-1)
	printf("overflow!!!\n");
	else {
		top++;
		stack[top]=a;
		stack2[top]=b;
	}
}
int pop() {
	int q;
	if(top==-1)
	printf("Queue empty!!\n");
	else {
		q=stack[top];
		top--;
		return q;
	}
	
}
int pop2() {
	int q;
	if(top==-1)
	printf("Queue empty!!\n");
	else {
		q=stack2[top];
		top--;
		return q;
	}
	
}
int quempty() {
	if(top==-1)
	return 1;
	else return 0;
}
void dfs(int node,int node2,int n,int m);
void creategraph(int n,int m) {
	int i,j;
	char q;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
}
void dfs_traversal(int n,int m) {
	int node,i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
		if(a[i][j]!='#')
		dfs(i,j,n,m);
	}
}
void dfs(int i1,int j1,int n,int m) {
 	int le,ri,be,ab;
	int k=0,w=0;
	int t=0;
	int i,j;
 	if(a[i1][j1]=='k')
 	k++;
 	else if(a[i1][j1]=='v')
 	w++;
 	a[i1][j1]='#';
 	push(i1,j1);
 	while(!quempty())
 	{
 		i=pop();
 		j=pop2();
		le=j-1;
 		ri=j+1;
 		be=i+1;
 		ab=i-1;
 		
 	while(ab>=0){
	 	if(a[ab][j]=='#')
	 	break;
	 	if(a[ab][j]=='k')
	 	k++;
	 	else if(a[ab][j]=='w')
	 	w++;
	 	a[ab][j]='#';
	 	push(ab,j);
 		ab--;	 	
	 }
	  if(ab==-1)
	 t=1;
	 while(be<n){
	 	if(a[be][j]=='#')
	 	break;
	 	if(a[be][j]=='k')
	 	k++;
	 	else if(a[be][j]=='w')
	 	w++;
	 	a[be][j]='#';
	 	push(be,j);
		 be++;		
	 }
     if(be==n)
	 t=1;
	 while(le>=0){
	 	if(a[i][le]=='#')
	 	break;
	 	if(a[i][le]=='k')
	 	k++;
	 	else if(a[i][le]=='w')
	 	w++;
	 	a[i][le]='#';
	 	push(i,le);
		 le--;		
	 }
	 if(le==-1)
	 t=1;
	 while(ri<m){
	 	if(a[i][ri]=='#')
	 	break;
	 	if(a[i][ri]=='k')
	 	k++;
	 	else if(a[i][ri]=='w')
	 	w++;
	 	a[i][ri]='#';
	 	push(i,ri);	
	    ri++;
	 }
	 if(ri==m)
	 t=1;
 	}
	if(t==1){
		k_max+=k;
		v_max+=w;
	}
	else {
		if(k>w)
		k_max+=k;
		else if(k<=w)
		v_max+=w;
	}
}
int main() {
	
	int n,m;
	scanf("%d%d",&n,&m);
	creategraph(n,m);
	dfs_traversal(n,m);
	printf("%d %d\n",k_max,v_max);
	return 0;
}