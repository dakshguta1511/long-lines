#include<iostream>
using namespace std;
/*
0
10
010
1010
01010
101010
*/


int main(){
    int rows;
    cin >> rows;

    for (int line=1; line<=rows; line++){

        if (line%2==0){
            for (int time=1; time<=line/2; time++){
                cout<<10;
            }
            cout << endl;
            
        }else{
            cout << 0;
            for (int time=1; time<=(line-1)/2; time++){
                cout << 10;
            }
            cout << endl;
        }
    }
}