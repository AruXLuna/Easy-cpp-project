#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Welcome this is part 2 of triangle!" << endl;
    cout << "Input the number here: ";
    cin >> n;


    cout << "First pattern" << endl;


    for(int i = 1; i <= n; i++) {
        for(int j = n; j > i; j--) {
            cout << " ";
        }
        for(int k = 1; k <= (2*i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Second pattern" << endl;

    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < i; j++) {
            cout << " ";
        }
        for(int k = n; k >= (2*i - n); k--) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Third pattern" << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 2; i <= n; i++) {
        for(int j = 1; j < i; j++) {
            cout << " ";
        }
        for(int k = n; k >= (2*i - n); k--) {
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}