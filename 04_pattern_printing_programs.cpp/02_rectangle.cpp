#include <iostream>
using namespace std;
int main(){
    int rows , cols;
    cout<<"enter rows and columns: ";
    cin>>rows>>cols;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// enter rows and columns: 7 9
// * * * * * * * * * 
// * * * * * * * * * 
// * * * * * * * * * 
// * * * * * * * * * 
// * * * * * * * * * 
// * * * * * * * * * 
// * * * * * * * * * 