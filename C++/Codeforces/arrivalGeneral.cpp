#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n, max=0, min=101, maxInd, minInd;
    cin >> n;
    int arr[n];
    
    for (int i =0 ; i< n; i++){
        cin >> arr[i];
        if (arr[i] > max){
            max = arr[i]; maxInd=i;
        }
        if (arr[i] <= min){
            min= arr[i]; minInd = i;
        }
    }
    if (maxInd > minInd){
        cout << (maxInd) + (n-2-minInd); 
    }else{
        cout << (maxInd) + (n-1-minInd);
    }
	
	return 0;
}
