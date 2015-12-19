#include<stdio.h>
#include<conio.h>
int count(int k,int *sum)
{   int x;
    while(k!=0)
    {          x=k%10;
               sum+=x;
               k/=10;
    }
}
int main()
{   int a,b;
    while(1)
    {                        scanf("%d%d",&a,&b);
                             if((a==-1)&&(b==-1))
                             break;
                             else
                              { int i,sum,tum=0;
                               
                                                     for(i=a;i<=b;i++)
                                                     {                sum=0;
                                                                      if(i/10==0)
                                                                      {tum+=i;}
                                                                      else
                                                                      {count(i,sum);
                                                                      tum+=sum;}
                                                                      
                                                     }
                                                     printf("%d\n",tum);
                               }
    }
    getch();
    return 0;
} 


#include <cstdio>
 
int c[2][10], pow10[10];
void count(int x, int *cnt){
        int d, dcnt = 0, r = 0, rem0 = 0, v;
        while(x){
                d = x % 10; x /= 10;
                if(dcnt){
                        v = d * pow10[dcnt - 1] * dcnt;
                        for(int i = 0; i < 10; ++i) cnt[i] += v;
                        if(!d) rem0 += (pow10[dcnt] - 1) - r;
                }
                v = pow10[dcnt];
                for(int i = 1; i < d; ++i) cnt[i] += v;
                if(d) cnt[d] += r + 1;
                r = pow10[dcnt++] * d + r;
        }
        cnt[0] -= rem0;
}
int main(void){
        pow10[0] = 1;
        for(int i = 1; i < 10; ++i) pow10[i] = 10 * pow10[i - 1];
        for(int a, b; scanf("%d %d", &a, &b) == 2 && a + b != -2; ){
                long long ans = 0;
                for(int i = 0; i < 10; ++i) c[0][i] = c[1][i] = 0;
                count(b, c[1]);
                count(a - 1, c[0]);
                for(int i = 1; i < 10; ++i) ans += (long long)i * (c[1][i] - c[0][i]);
                printf("%lld\n", ans);
        }
        return 0;
}
