#include <iostream>
#include <algorithm>
#include <map>
#include <queue>
#include <vector>
#define MAX 100
using namespace std;

priority_queue<int> max_1half;
priority_queue<int, vector<int>, greater<int>> min_1half;

void insertHeap(int &x)
{
    if (max_1half.empty() || max_1half.top() >= x)
    {
        max_1half.push(x);
    }
    else
    {
        min_1half.push(x);
    }
    balanceHeaps();
}

// Function to balance heaps.
void balanceHeaps()
{
    if (max_1half.size() > min_1half.size() && max_1half.size() - min_1half.size() > 1)
    {
        min_1half.push(max_1half.top());
        max_1half.pop();
    }

    else if (min_1half.size() > max_1half.size() && min_1half.size() - max_1half.size() > 1)
    {
        max_1half.push(min_1half.top());
        min_1half.pop();
    }
}

// Function to return Median.
double getMedian()
{
    double med = 0.0;
    if (max_1half.size() != min_1half.size())
    {
        med = max_1half.size() > min_1half.size() ? max_1half.top() : min_1half.top();
    }
    else
    {
        med = (double)(min_1half.top() + max_1half.top()) / 2;
    }
    return med;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        insertHeap(x);
        cout << getMedian() << " ";
    }
    return 0;
}