#include<cstdio>
int main()
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
              long int n,m,i;
              scanf("%ld%ld",&m,&n);
              long int t[n],T[n],x[n],c[n];
              for(i=0;i<n;i++)
              {
                              scanf("%ld%ld%ld%ld",&t[i],&T[i],&x[i],&c[i]);
                              max=c[i]/x[i];
                              temp=T[i]-t[i];
                              if(temp%2==0)
                              flag=n/temp;
                              else
                              flag=n/temp+1;
                              if(t[i]+n<=T[i])
                              {
                                              printf("%ld\n",n*c[i]);
                              }
                              else if(t[i]+n>T[i])
                              {
                                   if(n*x[i]<=c[i])
                                   printf("%ld\n",n*c[i]+);
                                   
                              
              
                                            
              }
    }
    return 0;
}
              
