#include <iostream>
using namespace std;

int main() {
        float a,b,sum;
        char aritmathics;

    cout << "Welcome to the calculator" << endl;

    cout << "Input the first number: ";
    cin >> a;
    cout << "Input the operator between +,-,*,/,: ";
    cin >> aritmathics;

    cout <<"Input the second number: ";
    cin >> b;

    if(aritmathics == '+') {
        sum = a + b;
    }else if(aritmathics == '-') {
        sum = a - b;
    }else if(aritmathics == '*') {
        sum = a * b;
    }else if(aritmathics == '/') {
        sum = a / b;
    }else{
        cout << "Invalid Input";
    }

    cout << "The Result is" << " = " << sum << endl;

    return 0;
}    
