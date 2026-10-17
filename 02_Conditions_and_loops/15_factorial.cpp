#include <iostream>
using namespace std;
int main(){
    int n;
    unsigned long long factorial = 1;

    cout<<"enter a number: ";
    cin>>n;

    if(n < 0 || n > 20){
        cout<<"enter a number between: "<<endl;
        return 0;
    }
    for (int i = 1; i <= n; i++){     //
        factorial *= i;
    }
    cout<<"factorial: "<<factorial<<endl;

    return 0;

}