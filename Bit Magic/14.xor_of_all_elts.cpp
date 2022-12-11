#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int A[] = {2, 1, 5, 9};
    int N = sizeof(A) / sizeof(A[0]);
    vector<int> v;
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        ans = ans ^ A[i];
    }

    for (int i = 0; i < N; i++)
    {
        A[i] = ans ^ A[i];
        v.push_back(A[i]);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}