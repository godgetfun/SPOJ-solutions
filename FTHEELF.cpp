#include<cstdio>
#include<cmath>
int main()
{
    while(1)
    {
            double v,h,g;
            g=9.8;
            scanf("%lf%lf",&v,&h);
            if(v<0&&h<0)     
            break;
            if(v<1)
            printf("0.000000\n");
            else
            {
            double x=tan(asin(v/sqrt((2*v*v+2*g*h))));
            printf("%.6lf\n",v*v/(v*x));
            }
            
    }
    return 0;
            
}

