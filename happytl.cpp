#include<cstdio>
int check(long int a,long int b,long int c,long int d)
     {
              if(a>c)
              {
                     if(a<c+d)
                     return 1;
                     return 0;
              }
              else if(a<c)
              {
                   if(c<a+b)
                   return 1;
                   return 0;
              }
              else if(a==c)
              return 1;
              else
              return 0;
     }
  
int main()
{
    
    while(1)
    {
            long int n,m,res=0,i,j,s,d;
             scanf("%ld%ld",&n,&m);
             if(n==0&&m==0)
             break;
             else
             {
             long int a[10000],b[10000],c[10000],d[10000];
             for(i=0;i<n;i++)
             scanf("%ld%ld%ld%ld",&s,&d,&a[i],&b[i]);
             
             for(j=0;j<m;j++)
             scanf("%ld%ld",&c[j],&d[j]);
             
             for(j=0;j<m;j++)
             {
                             for(i=0;i<n;i++)
                             {
                                             if(check(a[i],b[i],c[j],d[j]))
                                             res++;
                             }
             printf("%ld\n",res);
             res=0;
             }
             }
    }
    return 0;
}
             
