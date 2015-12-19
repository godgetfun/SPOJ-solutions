#include<stdio.h> 
#include<conio.h>
int charc(char);
main()
{
 int t, i=-1,a=-1,b=-1;
 char c[403];
 char out[403];
 char stack[300];
 scanf("%d%*c",&t);
 while(t)
 {
 b=a=-1;
 scanf("%s", c);
 for(i=0;c[i]!='\0'; i++)
 {

 if(c[i]=='(')
 {
 a++;
 stack[a]='(';
 }
 else if(c[i]==')')
 {
 while(stack[a]!='(')
 {
 b++;
 out[b]=stack[a];
 a--;
 }
 a--;
 }
 else if(c[i]=='+' || c[i]=='-' || c[i]=='/' || c[i]=='*' || c[i]=='^')
 {
 while(charc(stack[a])>=charc(c[i]))
 {
 b++;
 out[b]=stack[a];
 a--;
 printf("********");
 }
 a++;
 stack[a]=c[i];
 }
 else
 {
 b++;
 out[b]=c[i];
 }
 }
 out[b+1]='\0';
 printf("%s ",out);
 t--;
 }
 getch();
 return 0;
}
int charc(char x)
{
 switch(x)
 {
 case '^': 
      return 4;
 case '*':
      return 3;
 case '/': 
      return 3;
 case '+':
      return 2;
 case '-': 
      return 2;
 case '(': 
      return 1;
 }
 getch();
 return 0;
}
