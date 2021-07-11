#include<iostream>
using namespace std;

int main(){

    int stops, leave, enter, max_pass = 0, current_pass = 0;
    cin >> stops;

    for (stops > 0; stops--;){
        cin >> leave >> enter;
        current_pass = current_pass - leave + enter; 

        if (current_pass > max_pass){
            max_pass = current_pass;
        }
    }

    cout << max_pass << endl;
}