#include <iostream>
#include <string>
using namespace std;

int main()
{
    string names[] = {"3", "abac", "geuhdef", "9", "hh"};
    int n = sizeof(names) / sizeof(names[0]);
    int max = 0;
    string value = names[0];
    for (int i = 0; i < n; i++)
    {
        if (names[i].length() > max)
        {
            max = names[i].length();
            value = names[i];
        }
    }
    cout << value;
}