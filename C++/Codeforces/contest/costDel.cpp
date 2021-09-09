#include<iostream>
using namespace std;


int delZero(int a, int b, char arr[], int n){
    int len = n, sum=0; 
    char one = 1, zero = 0;
    while (len > 0){
        for (int y = 0; y<n; y++){
            if (arr[y] == zero){
                int curr=1; len--; y++;
                while (y<n && arr[y]!=one){
                   curr++; len--; y++;
                }
                sum += a*(curr) + b;
            }
        }
    }
    sum += a*len + b;
    return sum;
}

int delOne(int a, int b, char arr[], int n){
    int len = n, sum=0; 
    char one = 1, zero = 0;
    while (len > 0){
        for (int y = 0; y<n; y++){
            if (arr[y] == one){
                int curr=1; len--; y++;
                while (y<n && arr[y]!=zero){
                   curr++; len--; y++;
                }
                sum += a*(curr) + b;
            }
        }
    }
    sum += a*len + b;
    return sum;
}


int main(){
    int t; cin >> t;
    while (t--){
        int n, a, b, ans; 
        char str[n];
        cin >> n >> a >> b;
        for (int i = 0; i<n; i++){
            cin >> str[i];
        }
        cout << delZero(a,b,str,n);
        if (n*(a+b) >= (a*n + b)){
            cout << n*(a+b) << endl;
            continue;
        }
        /*
        if (delZero(a, b, str, n) >= delOne(a, b, str, n)){
            cout << delZero(a,b,str,n) << endl;
        }else{
            cout << delOne(a,b,str,n) << endl;
        }*/

    }
}