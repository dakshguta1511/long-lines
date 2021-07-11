#include<iostream>
using namespace std;

int main(){
    float ans = 0.0,  increment = 1.0; 

    int ques, precision;
    cin>>ques>>precision; 


    for (int places = 1; places <=precision+1; places++){
            
        while (ans*ans <= ques){
            ans += increment;
        }
        ans-=increment;
        increment/=10;
    }
    cout << ans;

    return 0;
}