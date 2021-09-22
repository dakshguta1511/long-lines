#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        int n, m, x, y; cin>>n>>m>>x>>y;
        long long int cost=0;
//x is linear, y is diagnol lineae<2*dia, choose diago
        if (2*x < y){
            cost += x*((m-1) + (n-1));
            cout << cost << "\n";
        }else{
            int diag = min(n,m); 
            int gret = max(n,m);
            cost += y*(diag-1) + x*(gret-diag);
            cout << cost << "\n";
        }
    }
}