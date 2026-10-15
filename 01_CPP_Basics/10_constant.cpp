#include <iostream>
using namespace std;
int main(){
    const double pi = 3.14159; //value ko change nahi kar sakte.
    const int DAYS_IN_WEEK = 7;

    double radius = 5.0;
    double area = pi * radius * radius;

    cout<<"pi: "<<pi<<endl;
    cout<<"days in a week: "<<DAYS_IN_WEEK<<endl;

    cout<<"circle radius: "<<radius<<endl;
    cout<<"circle area: "<<area<<endl;

    return 0;
}