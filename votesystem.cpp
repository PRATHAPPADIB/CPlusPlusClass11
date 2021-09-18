#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
        int age;
        cout << "Enter the age : " << ends;
        cin >> age;

        if (age >= 0)
        {
                if (age >= 18)
                {
                        cout << "You are eligible to vote " << ends;
                }
                else
                {
                        cout << "sorry ,  you are not adult" << ends;
                }
        }
        else
        {
                cout << "You are a ghost ";
        }

        return 0;
}
