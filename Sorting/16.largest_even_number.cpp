#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string str = "1234";
    sort(str.begin(), str.end(), greater<int>());
    int len = str.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if ((int)str[i] % 2 == 0)
        {
            swap(str[i], str[len - 1]);
            break;
        }
    }
    sort(str.begin(), str.begin() + len - 1, greater<int>());
    cout<<str;
}
