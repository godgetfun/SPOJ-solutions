#include<stdio.h>
#include<conio.h>
int main()
{ long int n,i,j,a[50][50],b[50];
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
                    scanf("%ld%ld",&a[i][0],&a[i][1]);
    }
    
    for(i=0;i<n;i++)
    {               b[i]=0;
                    for(j=0;j<n;j++)
                    {               if(a[i][0]==a[j][0])
                                    continue;
                                    else
                                    if((a[i][0]>=a[j][0]&&a[i][1]>=a[j][1])||(a[i][0]>=a[j][0]&&a[i][1]>=a[j][1]))
                                    b[i]++;
                    }
    }
    for(i=0;i<n;i++)
    printf("%ld\n",b[i]);
    getch();
    return 0;

}
                    
                    
