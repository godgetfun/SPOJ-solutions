#include<stdio.h>
#include<conio.h>
int main()
{   int t;
    scanf("%d",&t);
    while(t--)
    {
    int s,i,j,x,k;
    scanf("%d",&s);
    int tum=0;
    x=s-3;
    for(k=1;k<=x;k++)
    {
                     j=k;
    for(i=1;i<=k;i++)
    {
                     tum+=(i*j);
                     --j;
    }
    }
    printf("%d\n",tum);
    }
    getch();
    return 0;
}
