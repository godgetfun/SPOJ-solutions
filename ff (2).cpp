#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int l,r;
    float b,a,c,d;
    while(1)
    {
       scanf("%d",&l);
       if(l==0)
       break;
       else
       {
           b=acos(-1.0);
           c=l*l;
           d=c/(b*2.0);
           }
           printf("%.2f",d);
           }
           getch();
           return 0;
           }
           
    
