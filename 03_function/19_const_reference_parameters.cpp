#include <iostream>
#include <string>
using namespace std;

void displaymessage(const string& message){
    cout<<message<<endl;
}
int main(){
    string message = "My name is Saurabh";
    displaymessage(message);

    return 0;
}