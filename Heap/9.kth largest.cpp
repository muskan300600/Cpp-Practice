#include <iostream>
#include <algorithm>
#include <map>
#include <queue>
#include <vector>
#define MAX 100
using namespace std;

int main()
{
    int k = 4, n = 6;
    int arr[] = {1, 2, 3, 4, 5, 6};
    priority_queue<int> pq;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        pq.push(-arr[i]);
        if (pq.size() > k)
        {
            pq.pop();
        }
        if (pq.size() >= k)
        {
            v.push_back((-pq.top()));
        }
        else if (pq.size() < k)
        {
            v.push_back(-1);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}