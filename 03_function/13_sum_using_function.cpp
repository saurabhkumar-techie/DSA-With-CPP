#include <iostream>
using namespace std;

int calculatesum(int n){
    int sum = 0;

    for(int i=1;i<=n;i++){
        sum += i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"enter a positive number: ";
    cin>>n;

    if(n < 1){
        cout<<"enter a positive integer."<<endl;
        return 0;
    }
    cout<<"sum: "<<calculatesum(n)<<endl;


return 0;
}