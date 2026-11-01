#include <iostream>
using namespace std;

int square(int number){
    return number * number;
}
int cube(int number){
    return number * number * number;
}
bool iseven(int number){
    return number % 2 == 0;
}
int main(){
    int number;

    cout<<"enter a number: ";
    cin>>number;

    cout<<"square: "<<square(number)<<endl;
    cout<<"cube: "<<cube(number)<<endl;
    if(iseven(number)){
        cout<<"The number is even."<<endl;
    }
    else{
        cout<<"The number is odd."<<endl;
    }
    return 0;
}