	#include<stdio.h>
	#include<conio.h>
	
    int reverse(int n)
	{
	int r=0;
	while(n!=0)
	{
	r=r*10+(n%10);
	n/=10;
	}
	return r;
	}
	int main()
	{
	int t,n1,n2,x;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%d%d",&n1,&n2);
	x=reverse(reverse(n1)+reverse(n2));
	printf("%d\n",x);
	}
	getch();
	return 0;
	}
