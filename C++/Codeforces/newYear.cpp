#include<iostream>
using namespace std;

int main(){

    int ques, k, solved=0;
    cin >> ques >> k;

    int time = 240 - k;  //time left for me to solve problems
            
    for (int i = 1; i<=ques; i++){
        time -= 5*i;     //time to solve ith question
        if (time < 0){
            break;
        }
        solved++;
    }

    cout << solved;
}

