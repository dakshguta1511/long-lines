#include<iostream>
using namespace std;

int main(){
    int s, sum = 0;
    cin>>s;

    while (s > 0){
        sum += s%10;
        s= (s/10); //since declared s as a int, it automatically takes only the int part
    }
    cout << sum;

}