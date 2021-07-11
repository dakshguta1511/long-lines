#include<iostream>
using namespace std;

int main(){
    int people; cin >> people;
    int richest = -1; int money[people];

    //input all people's money & also find the richest dude
    for (int inp=0; inp<people; inp++){
        cin >> money[inp];
        if (money[inp] > richest){
            richest = money[inp];
        }
    }

    int welfare = 0;
    //provide everyone money so that they are all richest
    for (int j = 0; j<people; j++){
        welfare += (richest - money[j]);
    }

    cout << welfare;
}