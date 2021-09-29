#include <iostream>
#include <string>
using namespace std;

int getPrice(int bedroom, int bathroom)
{
    return 50 * bedroom + 100 * bathroom;
}

int main()
{
    int re = 1;
    while (re == 1)
    {
        string type;
        int bedrooms;
        int bathrooms;
        int price;

        cin >> type;
        cin >> bedrooms >> bathrooms;
        if (type == "standard")
        {
            price = getPrice(bedrooms, bathrooms);
            cout << price << endl;
        }

        else
        {
            price = getPrice(bedrooms, bathrooms);
            cout << price + 100 << endl;
        }
        cout << "Enter 1 to continue" << endl
             << "Enter 0 to exit" << endl;
        cin >> re;
    }
}