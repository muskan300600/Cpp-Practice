#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {3, 3, 2, 2, 4, 4, 9};
    int N = sizeof(arr) / sizeof(arr[0]);
    int K;
    cin >> K;
    int count = 0;
    int j = 0;
    vector<int> v;
    while (j != N)
    {
        for (int i = 0; i < N; i++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == K)
        {
            v.push_back(arr[j]);
        }
        j++;
    }

    int min = v[0];
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < min)
            min = v[i];
    }

    cout << min;
}
