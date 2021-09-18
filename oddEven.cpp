#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{       
        int Number = 0 ;
        cout << " Enter the Number :: " << ends;
        cin >> Number;

        if (Number % 2 == 0)
        {
                cout << Number << " is even" << endl;
        }
        else{
                cout << Number << " is Odd " << endl;
        }        
        return 0;
}
