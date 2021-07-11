#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> odd_index; vector<int> even_index;

    for (int ind = 1; ind <= n; ind++){
        int num;
        cin >> num; 
        if (num%2 == 0){
            even_index.push_back(ind);
        }else{
            odd_index.push_back(ind);
        }
    }

    if (even_index.size() == 1){
        cout << even_index[0] << endl; 
    }else{
        cout << odd_index[0] << endl;
    }
}