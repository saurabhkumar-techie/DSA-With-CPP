#include <iostream>
using namespace std;
int main(){
    int age;
    int hasid;

    cout<<"enter age: ";
    cin>>age;
    cout<<"do you have an ID? (1 = yes, 0 = no): ";
    cin>>hasid;

    if(age >= 18){
        if(hasid){
            cout<<"entery allowed."<<endl;
        }
        else{
            cout<<"id is required."<<endl;
        }
    }
    else{
        cout<<"you are under age."<<endl;
    }
    return 0;
}