#include<cstdio>

long long int add(long long int a,long long int b)
{
    return(a+b);
}
long long int sub(long long int a,long long int b)
{
    return(a-b);
}
long long int mul(long long int a, long long int b)
{
    return(a*b);
}
int len(int c)
{int j=0;
    while(c!=0)
    {
               c/=10;
               j++;
               }
               return j;
}
               
int main()
{   int t;
    scanf("%d",&t);
    while(t--)
    {
    char str[50];
    int i=0,la,lb,lc,p,big,e;
    long long int a=0,b=0,c,k;
    scanf("%s",str);
    while(1)
    {
                    if((str[i]=='+')||(str[i]=='-')||(str[i]=='*'))
                    {break;}
                    else if(str[i]==0)
                    break;
                    else
                    {
                    a=a*10+(int)(str[i]-48);
                    i++;
                    }
    }
    

    la=i;
    i++;
    while(1)
    {
            if(str[i]==0)
            break;
            else
            {b=b*10+(int)(str[i]-48);
            i++;}
    }
        switch(str[la])
    {
             case '+':
              c=add(a,b);
              break;
             
                  case '-':
                       c=sub(a,b);
                       break;
                       case '*':
                            c=mul(a,b);
                            break;
    }
    lb=i-la-1;
    lc=len(c); 
    big=la;
              if(lc>=la&&lc>lb)
              big=lc;
              else if(lb>=la&&lb>=lc)
              big=lb+1;
               printf("%*lld\n",big,a);
               printf("%*c",big-lb,str[la]);
               printf("%lld\n",b);
               
               if(str[la]=='*')
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
                                                                      printf("\n%*lld",e,a*(k%10));
                                                                      k/=10;
                                                                      e--;
                                                           }
                                                           printf("\n");
               }
                                                           for(i=0;i<big;i++)
                                                           printf("-");
                                                           printf("\n%*lld\n",big,c);
}
                                                           getch();
                                                           return 0;
}
                                                           
