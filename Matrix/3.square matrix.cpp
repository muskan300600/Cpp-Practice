#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int m = 4, n = 3;
    long long count = 0;
    int i = 1;
    int mini = min(m, n);
    while (i <= mini)
    {
        count += (n - i + 1) * (m - i + 1);
        i++;
    }
    cout << count;
}