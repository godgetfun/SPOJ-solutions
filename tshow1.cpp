#include<stdio.h> 
int main()   
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
     long b[100000],n,r,c=0,i; 
     scanf("%ld",&n);
     if(n==1)
     printf("5\n");
     else
     {
     while(n>0)
     {
               r=n%2;   
               b[c]=r;   
               n=n/2;   
               c++ ;   
     }
     for(i=c-1;i>=1;i--)   
      printf("%ld",b[i]+5);
      printf("\n");
    } 
    }  
     return 0;
}   
