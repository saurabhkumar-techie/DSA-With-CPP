#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;

    for(int i = 1; i <= n;i++){
        for(int j=1;j<=n;j++){
            if(i%2 == 0){
                cout<<(char)(i+64)<<" ";
            }
            else{
                cout<<(char)(i+96)<<" ";
            }
        }
        cout<<endl;
    }
}

// a a a a a a 
// B B B B B B 
// c c c c c c 
// D D D D D D 
// e e e e e e 
// F F F F F F 