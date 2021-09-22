#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){

        int a,b,c,x,y,z;
        cin>>a>>b>>c>>x>>y>>z;

        
        long long int maxScore=0;
        for (int aa=0; aa<=20; aa++){
            for (int bb=0; bb<=20; bb++){
                for (int cc=0; cc<=20; cc++){
                    long long int time, score;

                    time = (cc*c + aa*a + bb*b);
                    if (time<=240){
                        score =  aa*x + bb*y + cc*z; 
                        if (score>maxScore){
                            maxScore = score;
                        }
                    }

                }
            }
        }

        cout << maxScore << endl;
    }
}