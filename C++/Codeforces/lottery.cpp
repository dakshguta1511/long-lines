#include<iostream>
using namespace std;

int main(){
    int moni, bill = 0; cin >> moni;
    while (1==1){
    if (moni>=100){
        bill++; moni-=100;
    }else if (moni >= 20){
        bill++; moni-=20;
    }else if (moni >= 10){
        bill++; moni -= 10;
    }else if (moni >= 5){
        bill++; moni-=5;
    }else if (moni>=1){
        bill++; moni-=1;
    }
    else{
        break;
    }
    
    }
    
    cout << bill;
}

//accepted, very brute force though
