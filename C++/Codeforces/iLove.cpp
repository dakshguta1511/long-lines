#include<iostream>
using namespace std;

int main(){

    int con;
    cin >> con;
    
    int max, min, rate, cool = 0;

    //take input of forst
    cin >> rate;
    max = rate; min = rate;
    con--;

    //check for rest
    while (con--){
        cin >> rate;

        if (rate > max){
            cool++;
            max = rate;
        }
        if (rate < min){
            min = rate;
            cool++;
        }

    }
    cout << cool;
}