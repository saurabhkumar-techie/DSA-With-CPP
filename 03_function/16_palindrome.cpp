#include <iostream>
using namespace std;

bool ispalindrome(int number){
    if(number < 0){
        return false;
    }
    int original = number;
    long long reversed = 0;

    while(number > 0){
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    return original == reversed;
}
int main(){
    int number;

    cout<<"enter a number: ";
    cin>>number;
    if(ispalindrome(number)){
        cout<<"palindrome number"<<endl;
    }
    else{
        cout<<"not a palindeome number"<<endl;
    }
    return 0;
}