#include<stdio.h>
#define limit 1000001
unsigned a[limit];
void ETF()
{
     unsigned i, j;
     a[1] = 1;
     for(i=2;i<limit;i++)
     {
              if(!a[i])
               {
               a[i] = i-1;
               for(j=i*2;j<limit;j+=i)
               {
               if(!a[j]) 
               a[j]=j;
               a[j] = a[j]/i*(i-1);
               }
               }
     }               
}

int main()
{
unsigned t, n;
ETF();
for(scanf("%d",&t);t;t--)
{
scanf("%d",&n);
unsigned int H=0,i,j;
for( i=1;i<=n;i++){

                for( j=i;j<=n;j++){
                    if(i==j)
                    H+=a[j]*a[i];
                    else 
                    H+=2*(a[i]*a[j]);
                    

          }

}
printf("%u\n",H);
}
return 0;
}
