#include <iostream>
using namespace std;

int getnumber(){
    return 100;
}
int main(){
    int number = getnumber();
    cout<<"number: "<<number<<endl;
    return 0;
}