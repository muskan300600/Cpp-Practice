#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string S = "C";
    vector<string> v;
    string s;
    int n = S.length();
    while (n >= 0)
    {
        for (int i = 0; i < n; i++)
        {
            s = s + S[i];
        }
        v.push_back(s);
        s= "";
        n--;
        
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}