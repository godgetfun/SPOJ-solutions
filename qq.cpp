#include<stdio.h>
int main()
{
     long long int n,t,r[100000],count,major,i;
     scanf("%lld",&t);
     while(t--)
 {
     scanf("%lld",&n);
     scanf("%lld",&r[0]);
     major=r[0];
     count=1;
     for(i=1;i<n;i++)
     {
         scanf("%lld",&r[i]);
         if(r[i]!=major)
         {
             count--;
             if(count<0)
             {        count=1;
                     major=r[i];
             }
         }
         else
         {
             count++;
         }
     }
     /*if(count<=0)
     printf("NO\n");
     else
     printf("YES%lld\n",major);*/
    count=0;
     for(i=0;i<n;i++)
     {
                     if(r[i]==major)
                     count++;
     }
     if(count>n/2)
     printf("YES %lld\n",major);
     else
     printf("NO\n");}
     scanf("%lld",&r[0]);
 return 0;

}
