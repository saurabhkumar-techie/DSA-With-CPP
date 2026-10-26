#include <iostream>
using namespace std;

void swapnumbers(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
 }

 int main(){
    int a = 10;
    int b = 20;

    cout<<"before swap: "<<a<<" "<<b<<endl;
    swapnumbers(a,b);
    cout<<"after swap: "<<a<<" "<<b<<endl;

    return 0;
 }