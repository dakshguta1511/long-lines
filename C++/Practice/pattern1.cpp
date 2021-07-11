#include<iostream>
using namespace std;

int main(){
    int row=1, n;
    cin >> n;
    while (row <=n){
        int col = 1;
        
        if (row%2 != 0){
            
            while (col <= row){
                cout<<1;
                col++;
            }
            cout<<endl;
        }else{
            
            while (col<= row){
                if (col==1 || col == row){
                    cout << 1;
                }else{
                    cout<<0;
                }
                col++;

            }
            cout << endl;
        }
        row++;        
    }

}