#include <iostream>
using namespace std;
int main(){
    int marks;

    cout<<"enter marks: ";
    cin>>marks;

    if(marks < 0 || marks > 100){
        cout<<"invalid marks."<<endl;
    }
    else if(marks >= 90){
        cout<<"grade A"<<endl;
    }
    else if(marks >= 75){
        cout<<"grade B"<<endl;
    }
    else if(marks >= 50){
        cout<<"grade C"<<endl;
    }
    else{
        cout<<"grade D"<<endl;
    }
    return 0;
}