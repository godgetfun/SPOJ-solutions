#include<iostream>
        using namespace std;
        int main()
        {
                      int i,b,j,d;
                      int f=1,t=0;
                      char a;
                      int c[13];
                      for(i=1;i<=99;i++)
                      {
                                        cin>>b>>a;
                                        int q;
                                        q=b%9;
                                        if(q==0)
                                        {
                                                    q=(b/9);
                                                  c[q]=(int)a;
                                                  cout<<b<<" "<<c[q]<<" ";
                                        }
                      }
                      d=c[0];
                      cout<<c[0];
                      cout<<d;
                      for(j=1;j<11;j++)
                      {
                                       cout<<" "<<c[j];
                                       if(c[j]!=d)
                                       {
                                           t=1;
                                           break;
                                       }
                      }
                                       
                      if(t==0)
                      printf("YES\n");
                      else
                      printf("NO\n");
            return 0;
        }
                                                                
                                        
