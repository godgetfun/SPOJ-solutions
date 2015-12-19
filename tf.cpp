#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int t;
    long long p,q,r,a,e,c,d,f,g,i,h,n,j,;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
         scanf("%lld%lld%lld",&p,&q,&r);
         c=((7*p)+(5*q)+(2*r))*((7*p)+(5*q)-(2*r));
         d=c-(4*(p+q)*(12*r));
         e=pow(d,1/2);
         f=((7*p)+(5*q)+(2*r))+e;
         g=((7*p)+(5*q)+(2*r))-e;
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
                else 
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
                getch();
                return 0;
                }
             
             
