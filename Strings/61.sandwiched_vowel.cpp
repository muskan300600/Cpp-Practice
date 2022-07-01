#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    string s = "obab";
    int n = s.length();
    char one = s[0];
    char two = s[n-1];
    string str = "";

    for (int i = 0; i < n ; i++)
    {
        if (s[i] == 'a' & s[i] == 'e' & s[i] == 'i' & s[i] == 'o' & s[i] == 'u')
        {
            if(s[i+1] != 'a' & s[i+1] != 'e' & s[i+1] != 'i' & s[i+1] != 'o' & s[i+1] != 'u'){
                if(s[i-1] != 'a' & s[i-1] != 'e' & s[i-1] != 'i' & s[i-1] != 'o' & s[i-1] != 'u'){
                    
                }
            }
                
        }
    }

    str=one+str+two;

    cout << str;
}
