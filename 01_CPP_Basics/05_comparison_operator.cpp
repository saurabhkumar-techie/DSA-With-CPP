#include <iostream>
using namespace std;
int main(){
    int a = 20;
    int b = 10;

    cout<<boolalpha;

    cout<<(a == b)<<endl; //false
    cout<<(a != b)<<endl; //true
    cout<<(a > b)<<endl; //true
    cout<<(a < b)<<endl; //false
    cout<<(a >= b)<<endl; //true
    cout<<(a <= b)<<endl; //false

    return 0;
}