#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{

        double a, b, c, semiperi, area;
        cout << "Enter the number a : ";
        cin >> a; // input
        cout << "Enter the number b : ";
        cin >> b;
        cout << "Enter the number c : ";
        cin >> c; // input

        cout << "Result is here " << ends;

        semiperi = (a + b + c) / 2.0; // semiperimeter found

        area = sqrt((semiperi * (semiperi - a) * (semiperi - b) * (semiperi - c))); // area formula
        cout << "area of the triangle is " << area << " sq units " << endl;
        return 0;
}