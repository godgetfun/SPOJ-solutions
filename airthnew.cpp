#include <assert.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() 
{
int cases;

char a[501];
int la;
char op;
char b[501];
int lb;
char ch;
int big;
char c[501];
int lc;
int remainder;

scanf("%d\n", &cases);

for (int i = 0; i < cases; i++) {
la = lb = 0;

while ((ch = getchar()) && isdigit(ch))
a[la++] = ch;
memset(a + la, 0, 501 - la);

op = ch;

while ((ch = getchar()) && isdigit(ch))
b[lb++] = ch;
memset(b + lb, 0, 501 - lb);

assert(ch == '\n');

if (la >= lb)
big = la;
else
big = lb;

memset(c, 0, 501);

lc = big;
remainder = 0;
for (int i = 0; i < big; i++) {
int a_int = (long)(a[i] - '0'),
b_int = (long)(b[i] - '0'),
c_int;

if (op == '+') {
c_int = (long)(a_int + b_int + remainder);
} else if (op == '-') {
c_int = (long)(a_int - b_int - remainder);
} else if (op == '*') {
c_int = (long)(a_int * b_int + remainder);
}

remainder = c_int / 10;
c_int = c_int % 10;

c[lc - i - 1] = '0' + (char)(c_int);
}
if (remainder) {
memmove(c + 1, c, lc);
c[0] = '0' + (char)(remainder);
big = ++lc;
}

for (int i = 0; i < (big - la + 1); i++)
printf(" ");
printf("%s\n", a);

printf("%c", op);

for (int i = 0; i < (big - lb); i++)
printf(" ");
printf("%s\n", b);

for (int i = 0; i < (big + 1); i++)
printf("-");
printf("\n");

for (int i = 0; i < (big - lc + 1); i++)
printf(" ");
printf("%s\n\n", c);
}
}
