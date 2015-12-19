#include<cstdio>
#include<cstring>
int main()
{
    printf("Ready\n");
    while(1)
    {
            char a[5];
            gets(a);
            if(strcmp(a,"  ")==0)
            break;
            else
            {
            if(strcmp(a,"bd")==0)
            printf("Mirrored pair\n");
            else if(strcmp(a,"qp")==0)
            printf("Mirrored pair\n");
            else if(strcmp(a,"db")==0)
            printf("Mirrored pair\n");
            else if(strcmp(a,"pq")==0)
            printf("Mirrored pair\n");
            else
            printf("Ordinary pair\n");
            }
    }
    return 0;
}
            

