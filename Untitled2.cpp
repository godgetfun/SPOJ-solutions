#include<stdio.h>
#define PRINT(int) printf("%d\n",int)
#include<conio.h>
int main
{
    int x=1,y=2,z=3;
    x+=y+=z;
    PRINT(x<y?y:x)
    PRINT(x<y?x++:y++)
    PRINT(x):PRINT(y);
    PRINT(z+=x<y?x++:y++);
    getch();
    return 0;
}
