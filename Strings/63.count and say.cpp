#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    int n;
    cin >> n;
    string ans;
    if (n == 1)
        cout << "1";
    else if (n == 2)
        cout << "11";
    else
    {
        string s = "11";
        for (int i = 3; i < n; i++)
        {
            string t = "";
            s = s + '$';
            int c = 1;
            for (int j = 1; j < s.length(); j++)
            {
                if (s[j] != s[j - 1])
                {
                    ans = ans + to_string(c);
                    ans = ans + s[j - 1];
                    c=1;
                }
                else c++;
            }
            s=t;
        }
        cout<<t;
    }
}