#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v1(n);

    for (int i = 0; i<n; i++){
        cin >> v1[i];
    }

    int cost = v1[0], energy = 0;

    for (int j = 0; j<n-1; j++){
        if (v1[j] < v1[j+1]){
            int gain = v1[j+1] - v1[j];

            if (energy >= gain){
                energy -= gain;
            }else{
                gain -= energy;
                energy = 0;
                cost += gain;
            }
        //if jump down --> energy gain
        }else{
            energy += v1[j] - v1[j+1];
        }
    }

    cout << cost;

}
