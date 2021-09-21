#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin>>n;
        vector<int> v1(n);
        for(auto &i : v1){
            cin >> i;
        }

        int pp=n-1;
        while(v1[pp]<=v1[pp-1] && pp>0){
            pp--;
        }
        while (pp>0 && v1[pp]>=v1[pp-1]){
            pp--;
        }

        cout << pp << endl;

    }
}