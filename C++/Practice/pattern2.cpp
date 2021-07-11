#include<iostream>
using namespace std;

int main(){
    int n, row=1;
    cin >> n;
                                                        //1 //232 //34543  //4567654
    while (row<=n){
        int dig = row; 
        cout << dig;
    
        for (int inc =1; inc<=row-1; inc++){
            dig++;
            cout << dig;
        }

        for (int dec = row -1; dec >=1; dec--){
            dig--;
            cout<<dig;
        }
        cout<<endl;
        row++;
    }



    return 0;
}