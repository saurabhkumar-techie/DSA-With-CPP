#include <iostream>
using namespace std;
int main(){
    int n;
    long long sum = 0;

    cout<<"enter a number: ";
    cin>>n;
    
    if(n < 1){
        cout<<"please enter a positive number: "<<endl;
    }
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    cout<<"sum: "<<sum<<endl;

    return 0;
}