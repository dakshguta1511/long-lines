#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;
    int n;
    cin >> n;


    for (int i = 1; i < n; i++ ){
        if (n%i == 0){
            v1.push_back(i);
        }
    }

    for (int j = 0; j<v1.size(); j++){
        cout << v1[j] << " ";
    }
}