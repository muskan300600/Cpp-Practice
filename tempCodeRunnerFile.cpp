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

    int peak = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i - 1] < arr[i] & arr[i + 1] < arr[i])
        {
            peak = i;
        }
    }

    cout << "The peak element is: " << peak;
}