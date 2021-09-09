#include<iostream>
#include<string>
using namespace std;

int main(){

    int t; cin >> t;
    while (t--){
        int n; cin >> n;

        for (int i = 0; i<n; i++){
            char curr; cin >> curr;

            if (curr == 'U'){
                cout << "D";
            }else if (curr == 'D'){
                cout << "U";
            }else{
                cout << curr;
            }
        }

        cout << endl;
    }

    return 0;
}
