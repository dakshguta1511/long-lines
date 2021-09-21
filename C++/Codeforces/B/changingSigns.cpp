#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, k; cin>>n>>k;
    long long int sum=0;
    int arr[n];
    int neg=0, pos=0;

    for (int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] <= 0){
            neg++;
        }else{pos++;}
    }

    if (k<=neg){
        //make first k integers positive
        for (int i=0; i<k; i++){
            arr[i]*=-1;
        }
    }else{
        //make all negatives positive
        for (int i=0; i<neg; i++){
            arr[i]*=-1;
            k--;
        }
        //then sort the array
        sort(arr, arr+n);
        //for left k, remove the o=even part and make first element negative
        if (k%2==1){
            arr[0]*=-1;
        }
    }

    for (int k=0; k<n; k++){
        sum+=arr[k];
    }

    cout << sum;
}