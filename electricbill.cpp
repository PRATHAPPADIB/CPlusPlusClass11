#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
        float amount, discount_amount = 0;
        cout << "Enter the Amount of Bill : " << ends;
        cin >> amount;

        if (amount > 1000)
        {
                discount_amount = (amount / 100) * 8;
        }
        else
        {
                discount_amount = 0;
        }

        float total_amount = amount + discount_amount;

        cout << " BILL Datails" << endl;
        cout << " Amount of Bill RS " << amount << "/-" << endl;
        cout << " Discount Price RS " << discount_amount << "/- " << endl;
        cout << " Total Amount   RS " << total_amount << "/-" << endl;

        return 0;
}
