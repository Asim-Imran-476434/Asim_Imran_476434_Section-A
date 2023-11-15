#include <iostream>
using namespace std;
int main() {
    int n;  
    cout << "Enter the size of the diamond: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << "Please enter an odd number for the size of the diamond." << endl;
    }
    int spaces = n / 2;   
    for (int i = 0; i < n / 2 + 1; ++i) {  
        for (int j = 0; j < spaces; ++j) {
            cout << " ";
        } 
        for (int k = 0; k < 2 * i + 1; ++k) {
            cout << "*";
        } 
        cout << endl;  
        --spaces;
    }
    spaces = 1;
    for (int i = n / 2 - 1; i >= 0; --i) {
        for (int j = 0; j < spaces; ++j) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; ++k) {
            cout << "*";
        }
        cout << endl;
        ++spaces;
    }

    return 0;
}
