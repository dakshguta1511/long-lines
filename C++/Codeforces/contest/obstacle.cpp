#include<iostream>
using namespace std;

int main(){
    int test, xa, ya, xb, yb, xf, yf, xdis, ydis;
    cin >> test; 

    while (test--){
        cin >> xa >> ya >> xb >> yb >> xf >> yf;
        //cout << xa <<ya << xb << yb << xf << yf;
        if ((xa==xb) && (ya == yb)){
            cout << 0 << endl;
        }else if ((xa != xb) && (ya != yb)){
            xdis = (xa > xb)? xa-xb : xb-xa;
            ydis = (ya > yb)? ya-yb : yb-ya;
            cout << (xdis + ydis) << endl;
        }else if (xa == xb){
            ydis = ya>yb? ya-yb :yb-ya;
            
            if ((xf == xa) && ((yf>ya && yf <yb) || (yf>yb && yf<ya)) ){
                cout << ydis + 2 << endl;
            }else{
                cout << ydis << endl;
            }
        }else{
            xdis = xa>xb? xa-xb : xb-xa;
            if ((yf == ya) && ((xf>xa && xf<xb) || (xf <xa && xf>xb))){
                cout << xdis + 2 << endl;
            }else{
                cout << xdis << endl;
            }
        }
    }
}