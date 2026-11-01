#include <iostream>
using namespace std;
int main(){
 int x;
 cin>>x;
 
 for(int i = 1; i <= x;i++){
    for(int j = 1; j <= x;j++){
        cout<<(char)(j+64)<<" "; //print alphabetic char
    }
    cout<<endl;
 }
}

// A B C D E F 
// A B C D E F 
// A B C D E F 
// A B C D E F 
// A B C D E F 
// A B C D E F 