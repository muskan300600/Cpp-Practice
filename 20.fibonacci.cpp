#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        int c = a + b;
        a = b;
        b = c;
        cout << c <<ends;
    }
}