#include<iostream>
#include<conio.h>
using namespace std;
int gcd(int m,int n)
{
    if(m<0)
    m=-m;
    if(n<0)
    n=-n;
while(m!= n) 
{
if(m>n)
m=m-n; 
else
n=n-m;
}
return m;
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<gcd(m,n);
	getch();
	return 0;
}