#include<cstdio>
#include <algorithm>
using namespace std;
#define pi 3.14159265359 
int main()
{
    while(1)
    {
            double w,h,vol1,vol2,r;
            scanf("%lf%lf",&w,&h);
            if((w+h)<=0.0)
            break;
           	r=min(w/2.0,h/(2.0*pi+2.0));
            vol1=pi*r*r*w;
            r=w/(2.0*pi);
            vol2=pi*r*r*(h-2.0*r);
            printf("%.3f\n",max(vol1,vol2));
            }
    return 0;
}


            
