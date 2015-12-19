#include<cstdio>
#define MAX 30

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int d,m,y;
        scanf("%d%d%d",&d,&m,&y);
        char days[][30]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
        int mon[]={0,3,2,5,0,3,5,1,4,6,2,4};
        if(m<3)
        y--;
        int c_mon=mon[m-1];
        int c_year=y+y/4-y/100+y/400;
        int res=(c_year+c_mon+d)%7; 
        
        printf("%s\n",days[res]);
    }
    return 0;
}
