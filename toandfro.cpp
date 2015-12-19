#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
int c;
    while(scanf("%d",&c)!=0)
                              {
                               char ch[30][30];
                               char str[200];  
                              int r,c,i,j;
                              scanf("%s",str);
                              int l=strlen(str);
                              r=l/c;
                              for(int i=0;i<r;i++)
                                      for(int j=0;j<c;c++)
                                              ch[i][j]=str[i*c+j];
                              for(int i=0;i<r;i++)
                                      {
                                                    if((i+1)%2==0)
                                                    for(int j=0;j<c/2;j++)
                                                            {
                                                             int t;
                                                             t=ch[i][j];
                                                             ch[i][j]=ch[i][c-1-j];
                                                             ch[i][c-1-j]=t;
                                                             }
                                       }
for(int j=0;j<c;j++)
{
for(int i=0;i<r;i++)
{printf("%c",ch[i][j]);}}
printf("\n");
                               }
                               getch();
return 0;
}
