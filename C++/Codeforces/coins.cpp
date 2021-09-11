#include<iostream>
#include<string>
using namespace std;

void interpret(string s, int &a_great_b, int &b_great_c, int&c_great_a ){
    if(s[1]=='>'){
        if (s[0] == 'A' && s[2] == 'B'){
            a_great_b = 1;
        }else if(s[0]=='A' && s[2] == 'C'){
            c_great_a = 0;
        }else if(s[0] == 'B' && s[2] == 'C'){
            b_great_c = 1;
        }else if (s[0]=='B' && s[2] == 'A'){
            a_great_b = 0;
        }else if (s[0] == 'C' && s[2] == 'A'){
            c_great_a = 1;
        }else if (s[0] == 'C' && s[2] == 'B'){
            b_great_c = 0;
        }
    }else{
        if (s[0] == 'A' && s[2] == 'B'){
            a_great_b = 0;
        }else if(s[0]=='A' && s[2] == 'C'){
            c_great_a = 1;
        }else if(s[0] == 'B' && s[2] == 'C'){
            b_great_c = 0;
        }else if (s[0]=='B' && s[2] == 'A'){
            a_great_b = 1;
        }else if (s[0] == 'C' && s[2] == 'A'){
            c_great_a = 0;
        }else if (s[0] == 'C' && s[2] == 'B'){
            b_great_c = 1;
        }

    }
}
int main(){
    string one, two, three;
    cin >> one >> two >> three;  //a><b b><c c><a 
    int a_great_b, b_great_c, c_great_a;

    interpret(one, a_great_b, b_great_c, c_great_a); 
    interpret(two, a_great_b, b_great_c, c_great_a); 
    interpret(three, a_great_b, b_great_c, c_great_a);    

    if (a_great_b == 1 && c_great_a == 0){
        if (b_great_c == 1){
            cout << "CBA";
        }else{
            cout << "BCA";
        }
    }else if (a_great_b == 0 && b_great_c == 1){
        if (c_great_a == 1){
            cout << "ACB";
        }else{
            cout << "CAB";
        }
    }else if(c_great_a == 1 && b_great_c == 0){
        if (a_great_b == 1){
            cout << "BAC";
        }else{
            cout << "ABC";
        }
    }else{
        cout << "Impossible";
    }
}