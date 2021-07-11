#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string hatelove[2] = {"hate", "love"};
    int i = 0;

    while (n){     
        
        string feel = hatelove[i%2];

        cout << "I" << " ";
        cout << feel << " ";
        if (n==1){
            cout << "it" << " ";
        }else{
            cout << "that" << " ";
        }

        i++;
        n--;
    }
}