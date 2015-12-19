
#include<ctype.h>
#include<string.h>

int main()
{
    char a[13],b[13];
    scanf("%s",a);
    l=strlen(a);
    int j=0
    for(i=0;i<l;i++)
    {               if(a[i]=="=") break;
                    if(a[i]=="\0") continue;
                    b[j]=a[i];
                    j++;
    }
    k=0;
    for(i=0;i<j;j++)
    {
                    if(isdigit(b[i]))
                    c[k++]=(b[i]-48);
                    else
                    c[k++]=0;
                    
                                   
    
    
    
