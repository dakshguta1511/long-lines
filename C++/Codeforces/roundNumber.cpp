#include<iostream>
using namespace std;
//break the number in round numbers
//40089000 = 40000000 + 80000 + 9000

bool round(int x){
    while (x>=9){
        if (x%10 != 0){
            return false; //40009000
            break;
        }
        x /= 10;
    }

    return true;
}

int main(){
    if (round(1000000)){
        cout << "YES";
    }
}