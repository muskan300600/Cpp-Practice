#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void perm(string s, vector<string> &v, int l)
{
    if (l == s.length())
    {
        v.push_back(s);
        return;
    }
    for (int i = l; i < s.length(); i++)
    {
        swap(s[l], s[i]);
        perm(s, v, l + 1);
        swap(s[l], s[i]);
    }
}

int main()
{
    string s;
    cin >> s;
    vector<string> v;
    int l = 0;
    perm(s, v, l);
    sort(v.begin(), v.end());

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}