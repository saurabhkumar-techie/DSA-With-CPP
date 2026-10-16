#include <iostream>
using namespace std;
int main(){
    int num;

    cout<<"enter a number: ";
    cin>>num;

    if(num > 0){
        cout<<"positive number."<<endl;
    }
    else if(num < 0){
        cout<<"negative number."<<endl;
    }
    else{
        cout<<"zero number."<<endl;
    }
    return 0;
}