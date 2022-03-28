#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s = "*GeEkS4GeEkS*";
    vector<int> v1;
    int countU = 0, countL = 0, countN = 0, countS = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' & s[i] <= 'Z')
        {
            countU++;
        }
        else if (s[i] >= 'a' & s[i] <= 'z')
        {
            countL++;
        }
        else if (s[i] >= '0' & s[i] <= '9')
            countN++;
        else
            countS++;
    }
    v1.push_back(countU);
    v1.push_back(countL);
    v1.push_back(countN);
    v1.push_back(countS);

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
}
