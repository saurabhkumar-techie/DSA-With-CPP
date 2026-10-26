#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

double add(double a , double b){
    return a + b;
}

int main(){
    cout<<"integer sum: "<<add(10,20)<<endl;
    cout<<"decimal sum: "<<add(2.5,3.7)<<endl;

    return 0;
}