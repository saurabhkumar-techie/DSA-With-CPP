#include <iostream>
using namespace std;

void changevalue(int number){
    number = 100;
    cout<<"inside function: "<<number<<endl;
}

int main(){
    int number = 10;

    changevalue(number);
    cout<<"outside function: "<<number<<endl;

    return 0;
}