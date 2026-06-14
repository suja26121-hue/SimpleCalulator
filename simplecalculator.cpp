#include <iostream>

using namespace std;

// Function declarations
void showMenu();
void calculate();

int main() {
    cout << "====================================" << endl;
    cout << "     Welcome to My C++ Calculator   " << endl;
    cout << "====================================" << endl;

    char choice;

    do {
        calculate();

        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nThank you for using the calculator program! Goodbye." << endl;

    return 0;
}

void showMenu() {
    cout << "\nAvailable Operators:" << endl;
    cout << "  [ + ] Addition" << endl;
    cout << "  [ - ] Subtraction" << endl;
    cout << "  [ * ] Multiplication" << endl;
    cout << "  [ / ] Division" << endl;
}

void calculate() {
    double num1, num2, result;
    char op;

    cout << "\nEnter first number: ";
    cin >> num1;

    showMenu();

    cout << "Enter an operator: ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            cout << "\nResult: " << num1 << " + " << num2
                 << " = " << result << endl;
            break;

        case '-':
            result = num1 - num2;
            cout << "\nResult: " << num1 << " - " << num2
                 << " = " << result << endl;
            break;

        case '*':
            result = num1 * num2;
            cout << "\nResult: " << num1 << " * " << num2
                 << " = " << result << endl;
            break;

        case '/':
            if (num2 == 0) {
                cout << "\nError: Division by zero is undefined!" << endl;
            } else {
                result = num1 / num2;
                cout << "\nResult: " << num1 << " / " << num2
                     << " = " << result << endl;
            }
            break;

        default:
            cout << "\nError: Invalid operator entered!" << endl;
    }
}