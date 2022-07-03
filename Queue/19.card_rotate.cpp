#include <iostream>
#include <algorithm>
#include <deque>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    deque<int> dq;
    vector<int> v;
    dq.push_front(n);
    for (int i = 1; i < n; i++)
    {
        dq.push_front(n - i);
        for (int j = 0; j < n - i; j++)
        {
            int back = dq.back();
            dq.pop_back();
            dq.push_front(back);
        }
    }
    while (!dq.empty())
    {
        v.push_back(dq.front());
        dq.pop_front();
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}