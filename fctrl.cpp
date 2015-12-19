#include<stdio.h>
#include<conio.h>

int main()
	{
	 int t,n,x;
	 scanf("%d",&t);
	 while(t--)
	 {
	 x=0;
	 scanf("%d",&n);
	 while(n!=0)
	 {
	 x+= n/5;
	 n /= 5;
	 }
	 printf("%d\n",x);
	 }
	 getch();
	 return 0;
	}
