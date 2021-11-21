#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter length" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter element" << endl;
        cin >> arr[i];
    }

    for (int i = n-1; i >= 0; i--)
    {
        cout << arr[i] << ends;
    }
}