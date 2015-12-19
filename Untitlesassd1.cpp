#include<stdio.h>
#include<conio.h>
int add(int a,int b)
{
    return(a+b);
}
int sub(int a,int b)
{
    return(a-b);
}
int mul(int a, int b)
{
    return(a*b);
}
int len(int a)
{
    int j=0;
    while(a!=0)
    {
               j++;
               a/=10;
               }
               return j;
               }
int main()
{
    int a=0,b=0,c,j=0,k,i,p;
    int la,lb,lc,e,big,l=0;
    int sym;
    char str[50];
    scanf("%s",str);
    while((str[l]!='+'||str[l]!='-'||str[l]!='*'))
    {                  
                       a=a*10+(int)(str[l]-'0');
                       l++;
    }
                       sym=l;
                       l++;
     while(str[l]!='\0')
    {                  
                       b=b*10+(int)(str[l]-'0');
                       l++;
    }
                       
    switch(str[sym])
    {
                    case '*':
                         c=mul(a,b);
                         break;
                         case '+':
                              c=add(a,b);
                              break;
                              case '-':
                                   c=sub(a,b);
                                   break;
    }           
    la=sym;
    lb=len(b);
    lc=len(c);
              big=la;
              if(lc>=la&&lc>lb)
              big=lc;
              else if(lb>la&&lb>lc)
              big=lb;
               printf("%*d\n",big,a);
               printf("%*c",big-lb,str[sym]);
               printf("%d\n",b);
               
               if(str[sym]=='*')
               {
               for(p=0;p<lc;p++)
               {
                                                           if(p<(la>lb?lb-1:la-1))
                                                           printf(" ");
                                                           else
                                                           printf("-");
               }
                                                           k=b;
                                                           e=lc;
                                                           while(k!=0)
                                                           {
                                                                      printf("\n%*d",e,a*(k%10));
                                                                      k/=10;
                                                                      e--;
                                                           }
                                                           printf("\n");
               }
                                                           for(i=0;i<big;i++)
                                                           printf("-");
                                                           printf("\n%*d",big,c);
                                                           getch();
                                                           return 0;
}
                                                           
               
                 
