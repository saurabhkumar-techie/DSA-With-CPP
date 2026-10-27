#include <iostream>
using namespace std;

void countdown(int number){
    if(number == 0){
        cout<<"done"<<endl;
        return;
    }
    cout<<number<<" ";
    countdown(number - 1);
}

int main(){
    countdown(5);

    return 0;
}