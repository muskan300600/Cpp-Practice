#include <iostream>
#include <string>
using namespace std;

class Binary
{
public:
    string n;
    void getBinary()
    {
        cout << "Enter a binary number" << endl;
        cin >> n;
    }

    void chkBinary()
    {
        for (int i = 0; i < n.length(); i++)
        {
            if (n.at(i) != '0' && n.at(i) != '1')
            {
                cout << "Incorrect binary format" << endl;
                exit(0);
                
            }
        }
    }

    void ones_compliment()
    {
        chkBinary();
        for (int i = 0; i < n.length(); i++)
        {
            if (n.at(i) == '0')
            {
                n.at(i) = '1';
            }
            else
            {
                n.at(i) = '0';
            }
        }
    }

    void display()
    {
        for (int i = 0; i < n.length(); i++)
        {
            cout << n.at(i);
        }
        cout<<endl;
    }
};

int main()
{
    int c = 1;
    while (c == 1)
    {

        Binary b1;
        b1.getBinary();
        b1.chkBinary();
        b1.ones_compliment();
        b1.display();
        cout << "Enter 1 to continue and 0 to exit" << endl;
        cin >> c;
    }
}