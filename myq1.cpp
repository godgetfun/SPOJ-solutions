#include<cstdio>
int main()
{
    int t,row,c;
    long int n;
    scanf("%d",&t);
    while(t--)
    {
       scanf("%ld",&n);
       if(n==1) 
       printf("poor conductor\n");
       else
       {
           if(n%5==1||n%5==0)
              row=n/5;
              else
              row=n/5+1;
              c=n%10;
               if(c==1||c==2)
               printf("%d W L\n",row);
               else if(c==3||c==0)
               printf("%d A L\n",row);
               else if(c==4||c==9)
               printf("%d A R\n",row);
               else if(c==5||c==8)
               printf("%d M R\n",row);
               if(c==6||c==7)
               printf("%d W R\n",row);

       }


    }
     return 0;

    }
