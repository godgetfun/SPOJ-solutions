#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>

int printlcs(int,int);

struct lcs
{
  int dir;
  int num;
};
struct lcs  b[20][20];
char str1[20],str2[20];
void main()
 { int  gd=DETECT,gm;
   int l1,l2,i,j,row,col;
   initgraph(&gd,&gm,"..\\bgi");
   printf("Enter the first string");
   gets(str1);

   printf("Enter the second string");
   gets(str2);
   l1=strlen(str1);
   l2=strlen(str2);
   for(i=0;i<=l1;i++)
   b[i][0].num=0;
   for(i=0;i<=l2;i++)
   b[0][i].num=0;
   row=1;
   col=1;
   for(i=0;i<l1;i++)
   { col=1;
     for(j=0;j<l2;j++)
     {
    if(str1[i]==str2[j])
    { b[row][col].num=b[row-1][col-1].num+1;
      b[row][col].dir=92;
      col++;
    }
    else
    {
       if(b[row][col-1].num>b[row-1][col].num)
       { b[row][col].num=b[row][col-1].num;
         b[row][col].dir=27;
         col++;
       }
       else
       { b[row][col].num=b[row-1][col].num;
         b[row][col].dir=24;
         col++;
        }
     }

      }
      row++;
   }

    for(j=0;j<=(l1+1);j++)
    line(30,100+(j*33),500,100+(j*33));
    for(i=0;i<=(l2+1);i++)
    line(30+(i*62),100,30+(i*62),400);
    printf("\nThe Table for finding Longest common subsequence is\n\n");
    printf("\t");
    for(i=0;i<l2;i++)
    printf(" \t%c",str2[i]);
    printf("\n\n");
    for(i=0;i<=l1;i++)
    {
     for(j=0;j<=l2;j++)
     {
     if(i==0 || j==0)
     {
     printf("\t");
     printf("%d",b[i][j].num);
     }
     else
     printf("   (%c %d)",b[i][j].dir,b[i][j].num);
     }
    printf("\n\n %c",str1[i]);
    }
   printf("\n\n\n\nThe Longest common subsequence is- ");
   printlcs(l1,l2);

   getch();
 }
 int printlcs(int l1,int l2)
 { if(l1==0|| l2==0)
     return(0);
   if(b[l1][l2].dir==92)
    {
     printlcs(l1-1,l2-1);
     printf("%c",str1[l1-1]);
    }
    else
    {
   if(b[l1][l2].dir==24)
     printlcs(l1-1,l2);
   else
     printlcs(l1,l2-1);
   }
 }
