#include<iostream>
using namespace std;

int main(){

    int n, bin;
    cin >>n;

    while (n>0){

        cin>>bin;
        int i = 1, decimal = 0;

        while (bin > 0){
            decimal+=(bin%10)*(i);
            bin = bin /10;
            i= i*2;
        }
        cout << decimal<<endl;

        n--;
    }

    return 0;
}