#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <vector>

int maxRectangle(int a[], int n)
{
    stack<int> s;
    int l[n], r[n];
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && a[s.top()] >= a[i])
        {
            s.pop();
        }

        if (s.empty())
            l[i] = -1;
        else
            l[i] = s.top();
        s.push(i);
    }

    while (!s.empty())
    {
        s.pop();
    }

    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && a[s.top()] >= a[i])
        {
            s.pop();
        }

        if (s.empty())
            r[i] = n;
        else
            r[i] = s.top();
        s.push(i);
    }

    int currArea = 0;
    for (int i = 0; i < n; i++)
    {
        int res = (r[i] - l[i] - 1) * a[i];
        currArea = max(currArea, res);
    }
    return currArea;
}

int maxArea(int M[MAX][MAX], int n, int m)
{
    int res = maxRectangle(M[0], m);
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (M[i][j] == 1)
                M[i][j] += M[i - 1][j];
        }
        res = max(res, maxRectangle(M[i], m));
    }

    return res;
}

int main()
{
    vector<vector<int>> matrix{
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 1, 1}};

    cout << maximalRectangle(matrix);
}
