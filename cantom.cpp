#include<cstdio>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {         
              long int n,j=0,i,k;
              scanf("%ld",&n);
              for(i=1;;i++)
              {
                          j+=i;
                          if(j>=n)
                          break;
              }
              j=j-i;
              i=i+1;
              k=n-j;
              printf("TERM %ld IS %ld/%ld\n",n,k,(i-k));
    }
    return 0;
}   
