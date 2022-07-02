#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
#include<vector>

int main(){
    vector<int> a;
    int n = a.size();
    a.push_back(4);
    a.push_back(10);
    a.push_back(5);
    a.push_back(8);

    vector<int> ps,ns;
    stack<int> s,st;
    for(int i=0;i<n;i++){
        while (!s.empty() && s.top() >= a[i])
        {
            s.pop();
        }

        if (s.empty())
            ps.push_back(-1);
        else
            ps.push_back(s.top());
        s.push(i);
    }

    for (int i = n-1; i >= 0; i--)
    {
        while (!st.empty() && st.top() > a[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            ns.push_back(-1);
        }
        else
            ns.push_back(st.top());
        st.push(i);
    }
    
    int maxar = INT_MIN, area;

    for (int i = 0; i < n; i++) {
        area = a[i] * (ns[i] - ps[i] - 1);
        maxar = max(maxar, area);
    }
    cout<<maxar;
}