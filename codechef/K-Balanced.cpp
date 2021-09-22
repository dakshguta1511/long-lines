#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    

    int t; cin>>t;
    while(t--){
        unordered_map<int , int> visited;
        int n,k; cin>>n>>k;
        string s; cin>>s;
        int changes=0;

        for (int i=0; i<n-k; i++){
            if (s[i]=='1'){
                if (s[i+k]=='1'){
                    visited[i+k] =1; visited[i]=1;
                }else{
                    changes++;
                }
            }
        }
       
        for (int i=n-k; i<n; i++){
            if (s[i]=='1' && visited[i]!=1){
                changes++;
            }
        }

        cout << changes << "\n";
    }
}