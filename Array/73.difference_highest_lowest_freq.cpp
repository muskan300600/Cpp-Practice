#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = 1;
    int max = 1;
    int i = 0, j = 0, count=1;
    vector<int> v;
    while (i < n && j < n)
    {
        if (arr[i] == arr[j])
        {
            count++;
            j++;
        }
        v.push_back(count);
        i++;
    }

   cout << max_element(v.begin(), v.end()) - min_element(v.begin(), v.end())
}
