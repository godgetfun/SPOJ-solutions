 #include<iostream>
 using namespace std;
 int main()
 {
    unsigned long long int m,n,sum;
    while(scanf("%lld%lld",&m,&n)!=EOF)
    {
              sum=0;
              while(m!=(n+1))
              {
                     sum+=(m&(-m));
                      m++;
              }
              printf("%lld\n", sum);
    }
    return 0;
}
