#include<iostream>
using namespace std;

class Queue{
    int top, bottom, size, queue_arr[];

    public:
    //constructor
        Queue(int blocks){
            size = blocks;
            top = -1;  //latest
            bottom = 0;    //always zero
            queue_arr[size];
        };
    //manipulations
        void push(int x){
            if (top+1 == size){
                cout << "Queue overflow" << endl;
            }else{
                queue_arr[++top] = x;
            }
        };

        void remove(){
            if (top<bottom){
                cout << "Queue Underflow" << endl;
            }else bottom++;
        };

        void peek_top(){
            if (top >= bottom){
                cout << queue_arr[top];
            }else{
                cout << "Queue empty" << endl;
            }
        };
        void peek_bottom(){
            if (top>= bottom){
                cout << queue_arr[bottom];
            }else{
                cout << "Queue empty" << endl;
            }
        };

        int length(){
            if (top<bottom){
                return 0;
            }else{
                return (top-bottom+1);
            }
        };
};

int main(){

    cout << "MAIN" << endl;
    Queue q1(2);

    q1.push(1000);
    q1.push(2000);

    q1.push(3000); //overflow
    q1.peek_top(); cout << endl; //2000
    q1.peek_bottom(); cout << endl; //1000

    q1.remove(); 
    q1.peek_top(); cout << endl; //2000
    q1.peek_bottom(); cout << endl; //2000

    cout << q1.length() << endl;

}