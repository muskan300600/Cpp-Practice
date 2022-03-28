#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string S = "**Docoding123456789everyday##";
    vector<string> v1;
    string s1, s2, s3;
    for (int i = 0; i < S.length(); i++)
    {
        if ((S[i] >= 'a' & S[i] <= 'z') || (S[i] >= 'A' & S[i] <= 'Z'))
        {
            s1 = s1 + S[i];
        }
        else if (S[i] >= '0' & S[i] <= '9')
        {
            s2 = s2 + S[i];
        }
        else
            s3 = s3 + S[i];
    }

    v1.push_back(s1);
    v1.push_back(s2);
    v1.push_back(s3);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i];
    }
}