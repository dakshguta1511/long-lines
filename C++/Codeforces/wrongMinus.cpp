#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, time; 
    cin >> n >> time;

    while (time){

        if (n%10 == 0){
            n/=10;
        }else{
            n--;
        }
        time--;
    }

    cout << n;
}