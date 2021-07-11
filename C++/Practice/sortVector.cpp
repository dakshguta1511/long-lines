#include<bits/stdc++.h> //includes all cpp standard libraries (using sort and vector)
using namespace std;

int main(){

    int n;
    cin >> n;
    
    vector<int> v1{1,2,3,4,5,6,7};

    for (int ind = 0; ind < n; ind++){
        int num;
        cin >> num;
        v1.push_back(num);
    }

    sort(v1.begin(), v1.end());

    for (int indt = 0; indt < v1.size(); indt++){
        cout << v1[indt] << " ";
    }


   
}
