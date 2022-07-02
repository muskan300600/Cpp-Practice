#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>
using namespace std;

class MinStack
{
    stack<long long> st;
    long long mini;

public:
    MinStack()
    {
        while (!st.empty())
        {
            st.pop();
        }
        mini = INT_MAX;
    }

    void push(int value)
    {
        long long val = value;
        if (st.empty())
        {
            mini = val;
            st.push(val);
        }

        else
        {
            if (val < mini)
            {
                st.push(2 * val - mini);
                mini = val;
            }
            else
                st.push(val);
        }
    }

    void pop()
    {
        if (!st.empty())
        {
            if (st.top() > mini)
            {
                st.pop();
                if (st.empty())
                    mini = -1;
            }
            else
            {
                mini = 2 * mini - st.top();
                st.pop();
                if (st.empty())
                    mini = -1;
            }
        }
    }

    int top()
    {
        if (st.empty())
            return -1;
        long long v = st.top();
        if (v < mini)
        {
            return mini;
        }
        return v;
    }

    int getMin()
    {
        return mini;
    }
};

int main()
{
    MinStack s;
    s.push(3);
    s.push(5);
    s.getMin();
    s.push(2);
    s.push(1);
    s.getMin();
    s.pop();
    s.getMin();
    s.pop();
    s.top();
}