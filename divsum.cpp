#include<stdio.h>
#include<math.h>
int divisors(int n)
{
    int sum;
    int i;
    int temp;
    sum = 1;
    temp = (int)sqrt(n);
    for(i=2;i<=temp;i++) 
                         { 
                         if (n%i == 0)
                               sum += (i + n/i); 
                         } 
    if((temp*temp)==n) 
    { 
    sum -= temp; 
    } 

  return sum;
}

int main()
{
    int t;
    scanf("%d",&t);
    int n,c;
    while (t--) 
    {
          scanf("%d",&n);
          c=divisors(n);
          printf("%d\n",c);
    }
  return 0;
}
