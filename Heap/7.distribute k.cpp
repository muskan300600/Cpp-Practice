#include <iostream>
#include <algorithm>
#include <map>
#include <queue>
#include <vector>
#define MAX 100
using namespace std;

struct cmp
{

    bool operator()(pair<int, int> &a, pair<int, int> &b)
    {
        if (a.first == b.first)
        {
            return b.second > a.second;
        }
        return a.first < b.first;
    }
};

vector<int> TopK(vector<int> &array, int k)
{
    map<int, int> mp;
    for (auto it : array)
    {
        mp[it]++;
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    for (auto it : mp)
    {
        pq.push({it.second, it.first});
    }
    vector<int> v;
    while (k--)
    {
        v.push_back(pq.top().second);
        pq.pop();
    }
    return v;
}

int main()
{
    int n;
    cin>>n;
    vector<int> array(n);
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    vector<int> res = TopK(array,k);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}