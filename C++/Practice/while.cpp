#include<iostream>
using namespace std; 

int main(){

    int n, sum, i;
    cin >> n; 

    i = 1; 
    sum=0;
    while (i<=n){
        sum += i;
        i++;
    }
    cout << sum;
    return 0;

}