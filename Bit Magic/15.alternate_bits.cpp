#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int n;
    cin >> n;
    int val=0;
    while (n)
    {
        if (n & 1 == 1)
        {
            n = n >> 1;
            if (n & 1 == 0)
            {
                continue;
            }
            else
                val= 0;
        }
        n = n >> 1;
    }
    val=1;
    cout<<val;
}