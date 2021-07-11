#include<iostream>
using namespace std;

int main(){
    int opinion, sum=0, ans;
    cin >> opinion;

    for (int i =0; i<opinion; i++){
    
        cin >> ans;
        sum += ans;
    }

    if (sum>0){
        cout << "HARD";
    }else{
        cout << "EASY";
    }
}