#include <iostream>
using namespace std;
int main(){
    int age = 19;
    bool hasid = true;

    cout<<boolalpha;

    cout<<(age >= 18 && hasid)<<endl;
    cout<<(age >= 18 || hasid)<<endl;
    cout<<(!hasid)<<endl;

    return 0;
}