#include<stdio.h>
#include<conio.h>
void prime(int k)
{    int t=0;
     int i;
     for(i=3;i<k;i+=2)
     {
                     if(k/i==0)
                     break;
     }
     if(k==i)
     {printf("%d\n",k);}
} 
int main()
{
    int m,n,i;
    scanf("%d%d",&m,&n);
    i=m;
    while((i>=m)&&(i<=n))
    {           
         if(i==2)
         {printf("%d\n",i);}
          else 
          if(i%2==0)
          {
          i++;
          continue;
          }
          else prime(i);
         
                       if(i>2)
                                       {
                                       if(i%2==0)
                                       i++;
                                       else
                                       i+=2;
                                       }
                      else i++;
         
     } 

         getch();
         return 0;
}         
         
         
         
         
         
         
         
                                                 
