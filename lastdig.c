#include <stdio.h>
#include <string.h>
	
int main()
{
int num[][4] ={{0, 0, 0, 0}, {1, 1, 1, 1},{2, 4, 8, 6}, {3, 9, 7, 1},{4, 6, 4, 6}, {5, 5, 5, 5},{6, 6, 6, 6}, {7, 9, 3, 1},{8, 4, 2, 6}, {9, 1, 9, 1}};
int t;
scanf("%d",&t);
while(t--)
{
int a,c;
long b;
scanf("%d%ld",&a,&b);
if(b==0) {
printf("1\n");
} 
else 

{a=a%10;
b %= 4;
if(b==0)
        c=3;
        else c=b-1;
printf("%d\n",num[a][c]);
}
}
return 0;
}

