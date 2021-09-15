#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, length;
    int i1 = 1, j1 = 1, k1 = 1;
    int i = 1, j = 1, k = 1;

    cout << "Enter the number of vectors: " << endl;
    cin >> n;

    for (int loop = 0; loop < n; loop++)
    {
        cout << "enter the length of the vector(2/3): " << endl;
        cin >> length;
        if (length == 2)
        {
            cin >> i1 >> j1;
            i = i * i1;
            j = j * j1;
            k = k * k1;
        }

        if (length == 3)
        {
            cin >> i1 >> j1 >> k1;
            i = i * i1;
            j = j * j1;
            k = k * k1;
        }
    }

    int p = i + j + k;
    cout << "The dot product is:" << p;
}