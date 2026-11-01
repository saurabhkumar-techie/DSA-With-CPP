#include <iostream>
using namespace std;

void displayarray(const int arr[], int size){
    for(int i=0; i < size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int calculatesum(const int arr[],int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"array: ";
    displayarray(arr,size);
    cout<<"sum: "<<calculatesum(arr,size)<<endl;

    return 0;
}