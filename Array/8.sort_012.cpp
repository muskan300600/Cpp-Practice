#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    int n;
    cout << "enter length" << endl;
    cin >> n;
    int arr[n];
    int min, max;
    for (int i = 0; i < n; i++)
    {
        cout << "enter element" << endl;
        cin >> arr[i];
    }

    int low = 0, mid = 0, high = n - 1;
    for (mid = 0; mid <= high; mid++)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            
        }
        if (arr[mid] == 2)
        {
            swap(arr[high], arr[mid]);
            high--;
        }
    }
    for (int i = 0; i < n; i++){
        cout<<arr[i];
    }
}
