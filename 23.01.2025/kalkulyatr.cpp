#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0;
    char c;

    cout << "select number one: ";
    cin >> a;
    cout << "select number two: ";
    cin >> b;
    cout << "select action (+, -, *, /): ";
    cin >> c;

    if (c == '+') {
        cout << "Result: " << a + b << endl;
    }
    else if (c == '-') {
        cout << "Result: " << a - b << endl;
    }
    else if (c == '*') {
        cout << "Result: " << a * b << endl;
    }
    else if (c == '/') {
        if (b != 0) {
            cout << "Result: " << a / b << endl;
        } else {
            cout << "Error! Division by zero is not allowed." << endl;
        }
    }
    else {
        cout << "Invalid operation!" << endl;
    }

    return 0;
}

