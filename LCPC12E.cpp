#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    long double a,b,c,d,e,f,x,y;
    long double dis,rad,del;
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    rad=f/1.414;
    dis=((d-b)*(d-b)+(c-a)*(c-a));
    del=sqrt(dis);
    if(del>rad+e)
    {
                  printf("%d. No problem\n",i+1);
                  continue;
    }
    else
    {x=((dis-(f*f/2)+(e*e))*(dis-(f*f/2)+(e*e)))/(4*dis);
    y=sqrt((e*e)-x);
    printf("%d. %.3Lf\n",i+1,y*2);}
    }

    return 0;
    
}
     
