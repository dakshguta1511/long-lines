#include<iostream>
using namespace std;
#include<string>

int main(){
    int t; cin>>t;
     while(t--){
         int dig; cin>>dig;

         if (dig==1){
             cout << 3;
         }

         else{
            cout << 2; dig--;

            while (dig>1){
                cout << '0';
                dig--;
            }
            cout << 1;
         }
        
        cout << endl; 
     }
}