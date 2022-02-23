#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {86, 93, 82, 78, 35, 94, 91, 17, 12, 51, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<long long> v1;
    vector<long long> v2;
    vector<long long> v;
    for (long long i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            v1.push_back(arr[i]);
    }
    for (long long i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
            v2.push_back(arr[i]);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    reverse(v2.begin(), v2.end());

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }

    cout<<endl;

    for (int i = 0; i < v2.size(); i++)
    {
        v.push_back(v2[i]);
    }

    for (int i = 0; i < v1.size(); i++)
    {
        v.push_back(v1[i]);
    }

    for (int i = 0; i < v.size(); i++)
    {
        arr[i] = v[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}