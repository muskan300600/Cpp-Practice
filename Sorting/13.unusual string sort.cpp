#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string s = "bAwutndekWEdkd";
    string capCase, lowCase;
    for (int i = 0; i < str.size(); i++)
    {
        if (isupper(str[i]))
        {
            capCase += str[i];
        }
        else
        {
            lowCase += str[i];
        }
    }

    sort(lowCase.begin(), lowCase.end());
    sort(capCase.begin(), capCase.end());

    int i = 0, j = 0, k = 0;
    while (i < lowCase.size() and j < capCase.size())
    {
        if (k % 2 == 0)
        {
            str[k++] = capCase[j++];
        }
        else
        {
            str[k++] = lowCase[i++];
        }
    }

    while (i < lowCase.size())
    {
        str[k++] = lowCase[i++];
    }

    while (j < capCase.size())
    {
        str[k++] = capCase[j++];
    }

    cout << str;
}