#include <iostream>
using namespace std;

int main(int argc, char const *argv[])

{
        float a, b; // variable declare
        cout << "Enter the number a : ";
        cin >> a; // input
        cout << "Enter the number b : ";
        cin >> b;

        // logic of program

        a = a + b;
        b = a - b;
        a = a - b;

        cout << "value of a is : " << a << endl;
        cout << "value of b is : " << b << endl;

        return 0;
}
