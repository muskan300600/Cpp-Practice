#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int a[] = {11, 12, 13, 14, 15};
    int n = sizeof(a) / sizeof(a[0]);
    int count = 0;
    int x, rem;
    int k;
    cin>>k;
    for (int i = 0; i < n; i++)
    {
        int x = a[i];
        while (x > 0)
        {
            rem = x % 10;
            if (rem == k)
            {
                count++;
            }
            x = x / 10;
        }
    }

    cout<<count;
}