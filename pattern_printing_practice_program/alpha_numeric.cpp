
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % 2 != 0) {
                cout << j << " ";
            } else {
                cout << char('A' + j - 1) << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

// 1 
// A B 
// 1 2 3 
// A B C D 
// 1 2 3 4 5 
// A B C D E F 