#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t; 

    for (int tt = 0; tt < t; tt++){
        long long int a, b;
        cin >> a >> b; 

        if (a-b == 0){
            cout << 0 << " " << 0 << endl;
        }
        else{
            
            long long int gcd = (a-b>b-a) ? a-b : b-a ;
            long long int moves = (a%gcd > (gcd - a%gcd)) ? (gcd - a%gcd) : a%gcd;
            
            cout << gcd << " " << moves << endl;
        }
    }
}