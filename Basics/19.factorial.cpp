#include <iostream>
using namespace std;

int main()
{
    int fact = 1;
    int n;
    cin >> n;
    if (n == 1)
    {
        fact = 0;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
    }
    cout << fact << endl;
}