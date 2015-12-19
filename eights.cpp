#include<iostream>
using namespace std;
int main()
    {
            int T;
            unsigned long long k;
            int arr[] = {192,442,692,942};
            cin >> T;
            while(T--)
            {
                    cin >> k;
                    k--;
                    cout << 1000*(k/4) + arr[k%4] << endl;
            }
            return 0;
    }
