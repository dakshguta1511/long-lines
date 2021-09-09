#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n; cin >>n;
    vector<int> v1(n);

    for (int i =0; i<n; i++){
        cin >> v1[i];
    }
    int max_spread = 0;
    for (int j = 0; j<n; j++){
        int spread = 0;                                //8
                                                        //1 2 1 1 1 3 3 4
        for (int right = j+1; right<n; right++){
            if (v1[right] <= v1[right-1]){
                spread++;
            }else{
                break;
            }
        }
        
        for (int left = j-1; left>=0; left--){
            if (v1[left] <= v1[left+1]){
                spread++;
            }else{
                break;
            }
            
        }

        if (spread > max_spread){
            max_spread = spread;
        }
    }

    cout << max_spread+1;
}