#include <iostream>
using namespace std;
int main(){
    int num = 10;//implicit type casting
    float result = 10;

    cout<<"integer value: "<<num<<endl;
    cout<<"converted to float: "<<result<<endl;

    float decimal = 25.75f;//explicit type casting
    int converted = (int)decimal;

    cout<<"float value: "<<decimal<<endl;
    cout<<"converted to int: "<<converted<<endl;

    return 0;
}
