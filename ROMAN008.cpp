#include<cstdio>
#include<cstring>
int main()
{
    int t=5;
    while(t--){char a[50];int A[2]={0,0};int C,M;gets(a);int q[7]={1000,500,100,50,10,5,1};char Q[7]={'M','D','C','L','X','V','I'};int k[7]={900,400,90,40,9,4,0};char K[7]={'C','C','X','X','I','I',0};
int l1=strlen(a);int f=0;int i;for(i=0;;i++){if(a[i]==' '){f++;}if(f==2)break;if(a[i]=='M'){if(a[i-1]=='C') A[f]+=800;else A[f]+=1000;}else if(a[i]=='D'){if(a[i-1]=='C') A[f]+=300;else A[f]+=500;}else if(a[i]=='C')
{if(a[i-1]=='X') A[f]+=80;else A[f]+=100;}else if(a[i]=='L'){if(a[i-1]=='X') A[f]+=30;else A[f]+=50;}else if(a[i]=='X'){if(a[i-1]=='I') A[f]+=8;else A[f]+=10;}
else if(a[i]=='V'){if(a[i-1]=='I') A[f]+=3;else A[f]+=5;}else if(a[i]=='I') A[f]+=1;}i++;
if(a[i]=='%')C=A[0]%A[1];else if(a[i]=='/')C=A[0]/A[1];else if(a[i]=='*')C=A[0]*A[1];else if(a[i]=='+')C=A[0]+A[1];else if(a[i]=='-') C=A[0]-A[1];
if(C>=4000){C%=4000;printf("MMMM");}
for(i=0;i<7;i++){if(C>=q[i]){M=C/q[i];for(int j=0;j<M;j++)printf("%c",Q[i]);C=C%q[i];}if(C>=k[i]&&k[i]!=0){printf("%c%c",K[i],Q[i]);C-=k[i];}if(C==0)break;}
printf("\n");}
return 0;}
