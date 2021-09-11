#include<iostream>
#include<map>
#include<vector>
#include<cmath>
using namespace std;

int main(){

    int n, a; cin >> n >> a;
    a--;
    int catch_theif = 0;
    map<int, int> villages;
    map<int, int> theif;

    for (int i = 0; i<n; i++){

        int distance = (a-i) > (i-a) ? (a-i) : (i-a); //distnace
        int truth; cin >> truth;  //theif yes/no

        villages[distance] += 1;
        theif[distance] += truth;

    }

    int max_distance = (a) > (n-a-1)? (a): (n-1-a);

    for (int j = 0; j<=max_distance; j++){
        if (villages[j] == theif[j]){
            catch_theif += theif[j];
        }
    }

    cout << catch_theif;
}