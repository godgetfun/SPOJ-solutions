#include<cstdio>
#include<cstring>
int main()
{
    int t=10;
    while(t--)
    {
              int l1,l2,i,j,k;
              char a[101],b[101];
              scanf("%s%s",a,b);
              l1=strlen(a);
              l2=strlen(b);
              int c[l1],d[l1];
              k=l2-1;
              int temp=0;
              int flag=0;
              for(i=l1-1;i>=0;i--)
              {
                                            c[flag]=a[i]+b[k]-2*48+temp;
                                            if(c[flag]>9)
                                            {
                                                      if(k!=1)
                                                      {c[flag]%=10;}
                                                      temp=1;
                                            }
                                            printf("%d ",c[flag]);
                                            flag++;
                                            k--;
                                            if(k==0)
                                            break;
              }
              for(j=i-1;j>=0;j--)
              {
                               c[j]=a[j]-48+temp;
                               temp=0;
                               printf("%d ",c[j]);
              }
              int q=0;
              int rem=0;
              for(i=l1-1;i>=0;i--)
              {
                               printf("%d ",c[i]);
                                  /*d[q]=c[i]/2+rem;
                                  rem=c[i]%2;
                                  if(i!=0)
                                  c[i+1]=10*rem+c[i+1];
                                  q++;*/
              }
              for(i=0;i<q;i++);
              //printf("%d ",d[i]);
    }
    return 0;
}
              
              
              
                                  
              
