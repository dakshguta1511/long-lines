#include<iostream>
using namespace std; 

int main(){
    int size;
    cout<< "Number of elements in array:"; cin >> size; 
    int a[size]; //garbage values stored in array for now but created "size" space of array

    for (int q=0; q<size; q++){ //the compiler doesn't read space and enter 
        cin >> a[q];            //if you input in same line or different means same
    }

}