#include<cstdio>
#include<cstring>
#include<algorithm>
#include<string>
using namespace std;
#define MAXR 50
#define MAXC 50
char s[MAXR+10][MAXC+10]; 
        int main()
        {
                int t,n,m,k,i,j,cnt,maxOn,maxOff;
                scanf("%d",&t);
                while(t--)
                {
                        int n,m,k,i,j,sum=0;
                        scanf("%d %d %d",&n,&m,&k);
                        int a[50]={0};
                        for(i=0;i<n;i++)
                                scanf("%s",s[i]);
                        
                        for(i=0;i<n;i++)
                        {
                                for(j=0;j<m;j++)
                                {
                                        if(s[i][j]=='*')
                                        a[i]++;
                                }
                        }
                        sort(a,a+n);
                        for(i=0;i<k;i++)
                        {
                                a[0]=(m)-a[0];
                                sort(a,a+n);
                        }
                        for(i=0;i<n;i++)
                        sum+=a[i];
                        printf("%d\n",sum);
                }
                return 0;
        }
