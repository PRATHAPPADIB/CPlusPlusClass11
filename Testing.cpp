#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
        /* code */
        int a = 0, b = 1;
        int temp = a;
        a = b;
        b = a;

        cout << "The Output is " << a << endl; 
        cout << "The Output is " << b ;

        return 0;
}

