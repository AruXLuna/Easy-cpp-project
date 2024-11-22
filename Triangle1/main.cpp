#include <iostream>
using namespace std;

int main() {


    int n;

    cout << "This is the triangle" << endl;
    cout << "Input the number: ";
    cin >> n;

    
    cout << "This is the first pattern" << endl;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }


    cout << "This is the second pattern " << endl;

    for(int i = 1; i <= n; i++) {
        for(int j = n; j >= i; j--) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "This is the third pattern " << endl;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << " ";
        }
        for(int k = n; k >= i; k--) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "This is the fourth pattern " << endl;
    for(int i = 1; i <= n; i++) {
        for(int j = n; j >= i; j--) {
            cout << " ";
        }
        for(int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}