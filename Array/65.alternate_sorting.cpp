#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int N = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + N);
    int start = 0;
    int end = N - 1;
    vector<int> v;
    for (int i = start; i <= end; i++)
    {
        if (start < end)
        {
            v.push_back(arr[end]);
            v.push_back(arr[start]);

            start++;
            end--;
        }
        else if (start == end)
        {
            v.push_back(arr[start]);

            start++;
            end--;
        }
    }

    for(int i=0;i<v.size();i++){
        cout<<arr[i]<<" ";
    }
}