#include<iostream>
using namespace std;

int main(){
    bool prime = true;
    int num;
    cin >> num;

    for (int i = 2; num >= i*i; i++){
      
        if (num%i == 0){
            prime = false;
            break;
        }
    }

    if (prime){
        cout << num <<" is prime!"<<endl;
    }else{
        cout << num <<" is NOT prime!"<< endl;
    }

}