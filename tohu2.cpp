#include<cstdio>
int main()
{
    int t;
    while(t--)
    {
              int i,b;
              int f=1,t=0;
              char a;
              for(i=1;i<=99;i++)
              {
                                scanf("%d%c",&b,&a)
                                if(b%9==0&&b!=99&&b!=90)
                                {
                                                        if(f!=0)
                                                        {
                                                                c=a;
                                                                f=0;
                                                        }
                                                        else
                                                        if(a[i]!=c&&t==0)
                                                        t=1;
                                }
              }
              if(t==1)
              printf("N0\n");
              else
              printf("YES\n");
    }
    return 0;
}
                                                        
                                
