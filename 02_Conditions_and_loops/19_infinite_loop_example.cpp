#include <iostream>
using namespace std;
int main(){
    int i = 1;

    while(true){
        cout<<"count: "<<i<<endl;
        i++;
        if(i > 5){
            break; //break use for termainate loop
        }
    }
    cout<<"loop stop."<<endl;

    return 0;
}