#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    while(1)
    {
            scanf("%d%d%d",&a,&b,&c);
            if(a==0&&b==0&&c==0)
            break;
            else
            if((b-a)==(c-b))
            printf("AP %d\n",c+(b-a));
            else if(b/a==c/b)
            printf("GP %d\n",(c*c)/b);
    }
    getch();
    return 0;
}
