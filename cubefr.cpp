#include<cstdio>
#include<cmath>
#define limit 1000000 
long int bin(long int array[],long int search,long int n)
{
   long int c, first, last, middle;
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
 
   while( first <= last )
   {
      if ( array[middle] < search )
         first = middle + 1;    
      else if ( array[middle] == search ) 
      {
         return(middle+1);
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   return 0;   
} 
void check(long int a[])
{
     long int i,j,k;
    for(i=2;i*i*i<limit;i++)
    {
                        k=i*i*i;
                        for(j=k;j<limit;j+=k)
                        a[j]=1;
    }
}

int main()
{
    long int a[limit]={0};
    long int b[limit];
    check(a);
    long int k,j;
    k=0;
    for(j=0;j<limit;j++)
    {
                        if(a[j]==0)
                        {b[k]=j;
                        k++;}
    }
    long int t,i;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
              long int n;
              scanf("%ld",&n);
              if(n==1) 
              { 
                       printf("Case %ld: 1\n",i) ; 
                       continue;
              } 
              if(a[n]==0)
              printf("Case %ld: %ld\n",i,(bin(b,n,k)-1));
              else
              printf("Case %ld: Not Cube Free\n",i);
    }
    return 0;
}
              
    



