#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s = "geeksforgeeks";
    int k;
    cin >> k;
    //string ans = "";

    //     if (k == 1)
    //         cout << ans;

    //     stack<pair<char,int>> st;

    //     int count = 0;

    //     for (int i = 0; i < s.size(); i++)
    //     {
    //         if (st.empty())
    //         {
    //             count = 1;
    //             st.push({s[i],count});
    //         }

    //         else if (st.top().first == s[i])
    //         {
    //             count = st.top().second + 1;
    //             st.push({s[i],count});

    //             if (count == k)
    //             {
    //                 while (count--)
    //                     st.pop();
    //             }
    //         }

    //         else
    //         {
    //             count = 1;
    //             st.push({s[i],count});
    //         }
    //     }

    //     while (!st.empty())
    //     {
    //         ans += st.top().first;
    //         st.pop();
    //     }

    //     reverse(ans.begin(),ans.end());
    //     cout << ans;

    // Using single stack

    stack<char> stk;
    int cnt = 0;
    string red;
    if (k == 1)
        cout << red;
    else
    {
        while (true)
        {
            for (int i = 0; i < s.length(); i++)
            {
                if (stk.empty())
                {
                    cnt = 1;
                    stk.push(s[i]);
                }
                else
                {
                    if (stk.top() == s[i])
                        cnt++;
                    else
                        cnt = 1;
                    stk.push(s[i]);
                    if (cnt == k)
                        while (cnt--)
                            stk.pop();
                }
            }

            while (!stk.empty())
            {
                red += stk.top();
                stk.pop();
            }
            reverse(red.begin(), red.end());
            if (red.length() == s.length())
                break;
            s = red;
            red = "";
        }
        cout << red;
    }
}