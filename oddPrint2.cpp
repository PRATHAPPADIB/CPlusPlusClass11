#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{       
        int inpoot ;
        cout << "Enter the limit " << endl;
        cin >> inpoot;
        for ( int i = 1; i <= inpoot; i++)
        {
                if (i % 2 != 0)
                {
                      cout << i << endl;  
                }
                
                
        }
        return 0;
}
