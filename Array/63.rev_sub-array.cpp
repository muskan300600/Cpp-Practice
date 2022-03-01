#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 6, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = 1;
    int e = 4;
    for (int i = l; i < e; i++)
    {
        if (l < e)
        {
            swap(arr[l-1], arr[e-1]);
            l++;
            e--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
