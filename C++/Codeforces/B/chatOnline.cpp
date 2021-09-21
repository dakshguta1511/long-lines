#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    int p,q,l,r; cin>>p>>q>>l>>r;
 
    int possible = 0;
 
    vector<pair<int, int>> va(p); vector<pair<int, int>> vb(q);  
    for(int i=0; i<p; i++){ int aa, aaa; cin >> aa >> aaa; va[i] = make_pair(aa,aaa);}
    for(int j=0; j<q; j++){ int bb, bbb; cin >> bb >> bbb; vb[j] = make_pair(bb, bbb);}
 
 
    for (int time=l; time<=r; time++){
        int forThisTime = 0;
 
        for (int gg=0; gg<q; gg++){
            int start = vb[gg].first + time; int end = vb[gg].second + time;
 
            for (int hh=0; hh<p; hh++){
                int start2 = va[hh].first; int end2 = va[hh].second;
 
                //if ((start >= start2 && start<=end2) || (end>=start2 && end<=end2) || //(start < start2 && end > end2))
                if (start<=end2 && end>=start2){
                    forThisTime = 1; possible++;
                    break;
                }
            }
            if (forThisTime==1)break;
        }
    }
 
    cout << possible;
 
}