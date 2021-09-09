#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    string a,b;
    cin >> t >> a >>b;

    int cost = 0;

    for (int j = 0; j<t; j++){
        if (a[j]!= b[j]){
            if (j<t-1 && a[j] != a[j+1] && b[j] != b[j+1]){
                cost ++;
                a[j] = b[j]; a[j+1] = b[j+1];
            }else{
                cost ++;
                a[j] = b[j];
            }
        }
    }

    cout << cost << endl;
}