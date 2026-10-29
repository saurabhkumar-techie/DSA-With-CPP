#include <iostream>
using namespace std;

int globalvalue = 100;

void display(){
    int localvalue = 10;
    cout<<"global value: "<<globalvalue<<endl;
    cout<<"local value: "<<localvalue<<endl;
}
int main(){
    int localvalue = 5;

    cout<<"main local value: "<<localvalue<<endl;

    display();

    return 0;
}