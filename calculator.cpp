#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
        float num1, num2;
        char op;
        cout << "Enter the operator " << ends;
        cin >> op;

        cout << "Enter the number  ";
        cin >> num1; // input
        cout << "Enter the number : ";
        cin >> num2;

        switch (op)
        {
        case '+':
                cout << num1 << "+" << num2 << '=' << num1 + num2 << endl;
                break;
        case '*':
                cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
                break;
        
        case '-':
                cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
                break;
        case '/':
                cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
                break;
        case '%':
                cout << num1 << "%" << num2 << "=" << (num1 / 100) * num2 << endl;
                break;
        
        default:
                cout << " does not match operator  " ;
                break;
        }

        return 0;
}
