#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    cout << "This is the Dice Program using C++" << endl;
    char dice;

    while(true) {
        cout << " Wanna Throw it? (Y/N) ";
        cin >> dice;

        if(dice == 'Y') {
        cout << 1 + (rand() % 6) << endl;
        } else if(dice == 'N') {
            break;
        }else{
            cout << "Input the correct command between Y/N!" << endl;
        }
    }

    return 0;
}