#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

        int a, b, c; // variable declare
        cout << "Enter the number a : ";
        cin >> a; // input
        cout << "Enter the number b : ";
        cin >> b;
        cout << "Enter the number c : ";
        cin >> c;

        if (a > b)
        {
                if (a > c)
                {
                        cout << a  << " is greater " << ends;
                }
                else
                {
                        cout << c << " is greater " << ends;
                }
        }
        else
        {
                if (b > c)
                {
                        cout << b << " is greater" << ends;
                }
                else
                {
                        cout << c << " is greater " << ends;
                }
        }

        return 0;
}