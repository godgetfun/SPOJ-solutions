#include<cstdio>
#include<cmath>
int main()
{
    int t;
    long long p,q,r,a,e,c,d,f,g,i,h,n,j,l,m;
    scanf("%d",&t);
    while(t--)
    {   
         scanf("%lld%lld%lld",&p,&q,&r);
         long double w;
         l=(7*p)+(5*q)+(2*r);
         c=l*l;
         d=(4*(p+q)*(12*r));
         m=c-d;
         w=sqrtl((long double)m);
         e=(long long int)ceil((long double)w);
         f=l+e;
         g=l-e;
         h=(2*(p+q));
         if(f%h==0)
         {
             n=f/h;
             printf("%lld\n",n);
             d=((q-p)/(n-6));
             a=p-(2*d);
             for(j=0;j<n;j++)
             {
                             printf("%lld ",(a+(j*d)));
             }
         }
         else if(g%h==0)
         {
             n=g/h;
             printf("%lld\n",n);
             d=((q-p)/(n-6));
             a=p-(2*d);
             for(j=0;j<n;j++)
             {
                printf("%lld ",(a+(j*d)));
             }
         }
                printf("\n");
    }
    return 0;
}
             
             

