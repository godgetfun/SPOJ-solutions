#include<cstdio>
#include<cmath>
#include<cstring>
int limit=32760;

void primegen(int ar[])
{
    int w,i,j;
    ar[0]=-1;
    ar[1]=-1;
    for(i=4;i<limit;i+=2)
    {
           ar[i]=1;
    
    }
    w=(int)sqrt(limit);
    for(j=3;j<=w;j+=2)
    {
           if(ar[j]==0)
           {
           i=j;
           while(j*i<limit)
           {
                                 ar[j*i]=1;
                                 i+=2;
           }
           }
    }
}
int main()
{
    int *ar;
    ar=new (sizeof(int)*limit+1);
    primegen(ar);
    for(long int i=0;i<32700;i++)
    printf("%d\n",ar[i]);
    return 0;
}
