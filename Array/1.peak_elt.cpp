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
//LINEAR APPROACH
    //     int peak = 0;
    //     if (arr[0] > arr[1])
    //         peak = arr[0];
    //     if (arr[n-1]>arr[n-2])
    //         peak = arr[n-1];     
    //             
    //     for (int i = 0; i < n; i++)
    //     {
    //         
    //         if (i < n - 2)
    //         {
    //             if (arr[i - 1] < arr[i] & arr[i + 1] < arr[i])
    //             {
    //                 peak = arr[i];
    //             }
    //         }
    //      }
    //     cout << "The peak element is: " << peak;


//BINARY SEARCH APPROACH
    int f = 0;
    int l = n - 1;
    int peak = 0;
    while (f <= l)
    {
        int mid = (f + l) / 2;
        if (mid == 0 || arr[mid - 1] <= arr[mid] && mid == n - 1 || arr[mid + 1] <= arr[mid])
            peak = arr[mid];

        if (mid > 0 && arr[mid - 1] > arr[mid])
        {
            l = mid - 1;
        }
        else
        {
            f = mid + 1;
        }
    }
    cout << "Peak is: " << peak;
}
