#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s = "abcab";
    int result = 0;
    int count[26]={0};
    int n = s.length();

    for (int i=0; i<n; i++)
        count[s[i]-'a']++;
 
    
    for (int i=0; i<26; i++)
        result += (count[i]*(count[i]+1)/2);

    cout<<result;
}