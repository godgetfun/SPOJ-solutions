#include<cstdio>
#include<cmath>
int main()
{
    int t,i=0;
    scanf("%d",&t);
    while(t--)
    {
    int ta,sp;
    float g=9.806,angle,res;
    float pi=2*acos(0.0);
        scanf("%d%d",&ta,&sp);
        angle=ta*g/(sp*sp);
        
        if(angle<=1&&angle>=-1)
        {                      res=(asin(angle)*(180.0/pi))/2;
                               printf("Scenario #%d: %.2f\n",++i,res);
        }
        else
        printf("Scenario #%d: -1\n",++i);
    }
    return 0;
}
