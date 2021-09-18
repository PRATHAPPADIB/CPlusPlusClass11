#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

        float radius, area, cir;

        cout << "Enter the Radius : " << ends;
        cin >> radius;

        area = 3.14159 * radius * radius; // formula area of circle
        cout << "Area of the circle is  : " << area << " Sq units" << endl;

        cir = 2 * 3.14159 * radius;
        cout << "circumference of the circle is  : " << cir << " Sq units" << endl;

        return 0;
}