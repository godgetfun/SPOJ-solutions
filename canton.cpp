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
              if(i%2!=0)
              printf("TERM %ld IS %ld/%ld\n",n,k,(i-k));
              else
              printf("TERM %ld IS %ld/%ld\n",n,(i-k),k);
    }
    return 0;
}   
