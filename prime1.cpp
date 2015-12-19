#include<stdio.h>
#include<conio.h>
void prime(int i)
{    
     int k;
     for(k=3;k<i;k++)
     {
                     if(i/k==0)
                     break;
     }
     if(k==i)
     {printf("%d\n",k);}
} 
int main()
{
    int m,n,i;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)

    {           
         if(i==2)
         {printf("%d\n",i);}
          else prime(i);
         
         
     } 

         getch();
         return 0;
}         
         
         
         
         
         
         
         
                                                 
