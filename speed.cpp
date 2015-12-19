    #include<cstdio>
    #include<conio.h>

int gcd(int m,int n)
{
    if(m<0)
    m=-m;
    if(n<0)
    n=-n;
while(m!= n) 
{
if(m>n)
m=m-n; 
else
n=n-m;
}
return (m);
}
    int main()
    {
        int t;
        scanf("%d",&t);
        while(t--)
        {         int a,b;
                  int c,d;
                  scanf("%d%d",&a,&b);
                  c=gcd(a,b);
                  {d=(a/c)-(b/c);
                  if(d<0)
                  d=-d;
                  printf("%d\n",d);}
        
    }
    getch();
    return 0;
    }
    
                  
