#include<cstdio>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              int n,i;
              int c;
              scanf("%d",&n);
              int a[101]={0};
              for(i=0;i<n;i++)
              {
                              scanf("%d",&c);
                              a[c]++;
              }
              int max,pos;
              max=a[0];
              pos=-1;
              for(i=1;i<=100;i++)
              {
                                 if(a[i]!=0)
                                 {
                                 if(a[i]>max&&(a[i]%i==0))
                                 {
                                             max=a[i];
                                             pos=i;
                                 }
                                 else if(a[i]==max&&a[i]%i==0)
                                 {
                                      if(i<pos)
                                      {
                                               pos=i;
                                      }
                                 }
                                 }
              }
              printf("%d\n",pos);
    }
    return 0;
}
                                 
              
