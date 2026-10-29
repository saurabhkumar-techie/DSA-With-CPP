#include <iostream>
using namespace std;

bool isprime(int number){
    if(number < 2){
        return false;
    }
    for(int i=2;i<=number / i;i++){
        if(number %i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int number;
    cout<<"enter a number: ";
    cin>>number;
    if(isprime(number)){
        cout<<"prime number."<<endl;
    }
    else{
        cout<<"Not a prime number."<<endl;
    }
    return 0;
}