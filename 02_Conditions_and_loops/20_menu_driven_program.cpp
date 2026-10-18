#include <iostream>
using namespace std;
int main(){
    int choice;

    do {
        cout<<"---menu---"<<endl;

        cout<<"1. say hello\n";
        cout<<"2. print number 1 to 5\n";
        cout<<"exit\n";
        cout<<"enter choice: ";
        cin>>choice;

        switch(choice){
            case 1:
            cout<<"hello saurabh welcome to c++!"<<endl;
            break;
            case 2:
            for(int i=1;i<=5;i++){
                cout<<i<<endl;
            }
            break;
            case 3:
            cout<<"exiting program."<<endl;
            break;
            default:
            cout<<"invalid choice."<<endl;
        }
        
    }
    while(choice != 3 );

    return 0;
}