    #include<iostream>
    using namespace std;
    int main()
    {
        int i,j,t,n;
         long long min;
        cin>>t;
        for(i=0;i<t;i++){
                         cin>>n;
                         int a[n];
                          long long sum;
                         for(j=0;j<n;j++){
                                          cin>>a[j];
                                          }
                         
                         sum=a[0];
                         min=sum;
                         for(j=1;j<n;j++){
                                          sum+=a[j];
                                          if(min>sum)
                                          min=sum;
                                          }
                         if(min>0)
                         sum=1;
                         else{
                         min=-min;
                         sum=min+1;
                         }
                         
                         cout<<"Scenario #"<<i+1<<": "<<sum<<"\n";
                         }
    return 0;
    }




