#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int y = 1;
    long long int sum = 0;
    for (int x = 1; x <= n; x++)
    {
        y = n / x;
        sum = sum + (x * y);
    }
    cout << sum;
}