#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
              int i,j,l,sum=0,t=0;
              char str[1000];
              int h[10];
              scanf("%s",str);
              l=strlen(str);
              for(j=0;j<10;j++)
              {h[j]=0;}
              for(i=0;i<l;i++)
              {h[i]=(int)(str[i]-'0');}
              for(i=0;i<10;i++)
              printf("%d\n",h[i]);
              getch();
              return 0;
              }
              
