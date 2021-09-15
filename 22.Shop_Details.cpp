#include <iostream>
#include <string>
using namespace std;

int main()
{
    int itemid[100];
    int itemPrice[100];
    cout << "Enter the number of values you wish to enter" << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the id of the " << i + 1 << "th element: " << endl;
        cin >> itemid[i];
        cout << "Enter the price of the " << i + 1 << "th element: " << endl;
        cin >> itemPrice[i];
    }

    int re = 1;
    while (re == 1)
    {

        int find;
        cout << "enter the id which you wish to find: " << endl;
        cin >> find;
        int index = -1;

        for (int i = 0; i < 100; i++)
        {
            if (find == itemid[i])
            {
                index = i;
            }
        }

        if (index == -1)
        {
            cout << "the id doesn't exist";
            exit(0);
        }
        else
        {
            cout << "The price is: " << itemPrice[index] << endl;
        }

        cout<<"Enter 1 to continue and 0 to exit"<<endl;
        cin>>re;
    }
}
