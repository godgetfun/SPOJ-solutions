#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char c;
    fp=fopen("data","w");
    while((c=getchar())!=EOF)
    {
        putc(c,fp);
        }
    fclose(fp);
    fp=fopen("data","r");
    while((c=getc(fp))!=EOF)
    {
        printf("%c",c);
        }
        fclose(fp);
        return 0;
        getch();
        }
