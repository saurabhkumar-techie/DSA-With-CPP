#include <iostream>
using namespace std;
int main(){
    int number = 10;

    cout<<"main value is: "<<number<<endl;

    number += 5;
    cout<<"after += 5: "<<number<<endl;

    number -= 3;
    cout<<"after -= 5: "<<number<<endl;

    number *= 2;
    cout<<"after *= 2: "<<number<<endl;

    number /= 4;
    cout<<"after /= 4: "<<number<<endl;

    number %= 3;
    cout<<"after %= 3: "<<number<<endl;

    return 0;
}