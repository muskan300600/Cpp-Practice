#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int A[] = {4, 1, 2, 1, 1, 2};
    int B[] = (3, 6, 3, 3);
    int n = 6, int m = 4;
    sort(A, A + n);
    sort(B, B + m);
    int sum1 = 0;
    int sum2 = 0;
    int val=-1;
    unordered_map<int, int> um;
    for (int i = 0; i < n; i++)
    {
        sum1 += A[i];
        um[A[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        sum2 += B[i];
    }
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (sum1 - A[i] + B[j] == sum2 - B[j] + A[i])
            val=1;
        else if (sum1 - A[i] + B[j] > sum2 - B[j] + A[i])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout<<val;;
}