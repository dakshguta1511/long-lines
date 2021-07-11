#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    for (int t = 0; t < test; t++){
        long long int n;
        cin >> n; 
        long long int thiss, sum=0;

        for (int inp = 0; inp < n; inp++){     //sum = 27, 4 4 4 5 5 5
            cin >> thiss;
            sum += thiss;
        }

        long long int rem = sum%n;

        long long ans = (n-rem)*rem;
        cout << ans << endl;
        
    }
}