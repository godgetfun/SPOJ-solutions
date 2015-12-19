#include <iostream>

using namespace std;

int main()
{
double t;
while(1)
         {
         cin>>t;
         if(t==0.00) 
         break;

         int n=1;
         double sum=0.5;	

while (sum<t) 
{
n++;
sum += 1.0/(n+1);
}

cout << n << " card(s)" << endl;
}

return 0;
}
