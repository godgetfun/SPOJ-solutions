#include<cstdio>
#include<algorithm>

using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {         int i,a,b;
              scanf("%d%d",&a,&b);
              int g[100000],m[100000];
              for(i=0;i<a;i++)
              scanf("%d",&g[i]);
              for(i=0;i<b;i++)
              scanf("%d",&m[i]);
              sort(g,g+a);
              sort(m,m+b);
              if(m[b-1]>g[a-1])
              printf("MechaGodzilla\n");
              else if(m[b-1]<=g[a-1])
              printf("Godzilla\n");
              else
              printf("uncertain\n");

    }
   
    return 0;
}                  
              
