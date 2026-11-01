#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number: ";
    cin>>x;

    for(int i=1; i <= x;i++){
        for(int j=1; j <= x;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 