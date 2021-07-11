#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int num, ans=0;

    for (int ele = 0; ele <n; ele ++){
        cin >> num;
        ans^=num;
    }
    cout << ans;
}