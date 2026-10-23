#include <iostream>
using namespace std;

void introduce(string name, int age = 18){
    cout<<"name: "<<name<<endl;
    cout<<"age: "<<age<<endl;

}

int main(){
        introduce("saurabh");
        introduce("saurabh",19);
        return 0;
    }