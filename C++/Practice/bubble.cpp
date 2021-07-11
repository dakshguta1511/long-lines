#include<iostream>
using namespace std;

int main(){

    int size;
    cin>>size;
    int a[size];
    for (int y = 0; y<size; y++){
        cin >> a[y];
    }

    //now sort
    for (int loop=0; loop<size; loop++){
        for (int swap=0; swap<size-1; swap++){
            if (a[swap] > a[swap+1]){
                int small = a[swap+1];
                a[swap+1] = a[swap];
                a[swap] = small;
            }
        }
    }

    for (int ans = 0; ans<size; ans++){
        cout << a[ans] << " ";
    }
}