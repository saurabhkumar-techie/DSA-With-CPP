#include <iostream>
using namespace std;
int main(){
    int number = 5;

    cout<<"Initial: "<<number<<endl;

    cout<<"post increment: "<<number++<<endl;
    cout<<"after post increment: "<<number<<endl;//after post increment increase value from 5 to 6
    cout<<"pre increment: "<<++number<<endl;//after pre increment the value is 7
    cout<<"post decrement: "<<number--<<endl;
    cout<<"after post decrement: "<<number<<endl;//after post decrement the value is 7 - 1 = 6
    cout<<"pre decrement: "<<--number<<endl;//after pre decrement the value is 6 - 1 = 5

    return 0;
}