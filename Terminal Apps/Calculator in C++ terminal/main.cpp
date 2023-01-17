#include <iostream>
using namespace std;

int main() 
{
    float num1,num2;
    string op;
    cout << "Type your first number: "; // Type a number and press enter
    cin >> num1; // Get user input from the keyboard
    cout << "Type your second number: "; // Type second number
    cin >> num2; 

    // let the user decide whats the operation to be use
    cout << "Operation: ";
    cin >> op;

    if (op == "+") {
        cout << num1 << "+" << num2 << "="<<num1 + num2 << "\n";
    }

    if (op == "-") {
        cout << num1 << "-" << num2 << "="<<num1 - num2 << "\n";
    }

    if (op == "*") {
        cout << num1 << "*" << num2 << "="<<num1 *  num2 << "\n";
    }

    if (op == "/") {
        cout << num1 << "/" << num2 << "="<<num1 / num2 << "\n";
    }


}