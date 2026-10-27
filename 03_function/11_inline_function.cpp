#include <iostream>
using namespace std;

inline int square(int number){
    return number * number;
}

int main(){
    cout<<"square of 5: "<<square(5)<<endl;

    return 0;
}