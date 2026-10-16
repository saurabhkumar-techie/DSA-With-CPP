#include <iostream>
using namespace std;
int main(){
    double a,  b;
    char op;

    cout<<"enter expression: ";
    cin>>a>>op>>b;

    switch (op){
        case '+':
            cout<<"result: "<<a + b<<endl;
            break;
        case '-':
            cout<<"result: "<<a - b<<endl;
            break;
        case '*':
            cout<<"result: "<<a * b<<endl;
            break;
        case '/':
            if(b != 0){
                cout<<"result: "<<a / b<<endl;
            }
            else{
                cout<<"error division by zero"<<endl;
            }
            break;
            default:
                cout<<"invalid operator"<<endl;
    }
    return 0;
}