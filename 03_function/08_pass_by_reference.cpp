#include <iostream>
using namespace std;

void changevalue(int& number){
    number = 100;

}

int main(){
    int number = 10;

    cout<<"before: "<<number<<endl;
    changevalue(number);
    cout<<"after: "<<number<<endl;

    return 0;
}