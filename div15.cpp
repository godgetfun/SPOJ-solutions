#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              int i,j,l,sum=0,t=0;
              char str[1000];
              int h[10];
              scanf("%s",str);
              l=strlen(str);
              for(j=0;j<10;j++)
              {h[j]=0;}
              for(i=0;i<l;i++)
              {++h[(int)(str[i]-'0')];
              sum+=(int)(str[i]-'0');}
              if(h[0]==0)
              {t=1;}
              if(h[0]==0&&h[5]==0)
              {printf("impossible\n");
              continue;}
              
              else if(sum%3==1)
              {
                   if(h[1]>=1)
                   {--h[1];
                   --sum;}
              	   else if(h[4]>=1) 
                   {--h[4];
                   sum -= 4;}
                   else if(h[7]>=1) 
                   { --h[7]; 
                   sum -= 7;}
                   else
                   {
                       for(i=2;(sum % 3) && i < 10;i+=3)
                       for(j=i;(sum % 3) && j < 10;j+=3)
                       {
                       if(i == j && h[i] > 1) 
                       {h[i] -= 2;
                       sum -= 2*i;}
                       if(i != j && (h[i]>0) && (h[j]>0)) 
                       {h[i]--;
                       h[j]--;
                       sum -= i + j;}
                       }
                   }
              }
                else if(sum % 3 == 2)
                {
                     if(h[2]>=1) 
                     {--h[2];
                     sum -= 2;}
                     
                     else if(h[5]>=1) 
                     {--h[5];
                     sum -= 5;}
                     
                     else if(h[8]>=1) 
                     {--h[8]; 
                     sum -= 8;}
                     else 
                     {
                      for(int i = 1; (sum % 3) && i < 10; i += 3)
                      for(int j = i; (sum % 3) && j < 10; j += 3)
                      {
                              if(i == j && h[i] > 1) 
                              {h[i] -= 2;
                              sum -= 2*i;}
                              if(i != j && h[i]>0 && h[j]>0) 
                              {h[i]--;
                              h[j]--;
                              sum -=i+j;}
                       }
                     }
                   }
                if(sum==0)
                {printf("0\n");
                continue;}
                if(sum%3!=0)
                {printf("impossible\n");
                continue;}
                else
                {	
                    for(i=9;i>=0;i--) 
                    {
                          while(h[i]--)
                          {if(t==1)
                          {if(h[5]<=1)
                          break;}
                          printf("%c",(char)(i+'0'));}
                    }
                    if(t==1) 
                    printf("5");
                    printf("\n");
                }
                
              
              
             }         
    getch();
    return 0;
}
