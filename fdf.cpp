#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int t,r,u;
    float a,b,c,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&r,&u);
        a=((float)r)*9.806;
        printf("%.2f  ",a);
        b=a/(float)(u*u);
        printf("%f   ",b);
        c=asin(b);
        printf("%f  ",c);
        d=(c*180)/2;
        printf("%f",d);
        }
        getch();
        return 0;
        }
