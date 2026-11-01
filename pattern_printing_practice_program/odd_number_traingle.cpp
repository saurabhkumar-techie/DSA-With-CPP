#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<2*j-1<<" ";
        }
        cout<<endl;
    }
}

// 1 
// 1 3 
// 1 3 5 
// 1 3 5 7 
// 1 3 5 7 9 
// 1 3 5 7 9 11 
// 1 3 5 7 9 11 13 
// 1 3 5 7 9 11 13 15 
// 1 3 5 7 9 11 13 15 17 