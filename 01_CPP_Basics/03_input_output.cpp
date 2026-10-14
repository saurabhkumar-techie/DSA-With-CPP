#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    int age;

    cout<<"Enter your name:"<<endl;
    getline(cin,name); // allows to take input with spaces

    cout<<"Enter your age:"<<endl;
    cin>>age;

    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;

    return 0;
}