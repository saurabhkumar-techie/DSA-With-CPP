#include <iostream>
using namespace std;
int findlargest(int a, int b, int c){
    if(a >= b && a >= c){
        return a;
    }
    else if(b >= a && b >= c){
        return b;
    }
    return c;
}

int main(){
    int a,b,c;
    cout<<"enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"largest: "<<findlargest(a,b,c)<<endl;
    return 0;
}