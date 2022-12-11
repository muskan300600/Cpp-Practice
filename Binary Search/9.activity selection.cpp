#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

static bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

int activitySelection(int start[], int end[], int n)
{
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
        v.push_back({start[i], end[i]});

    sort(v.begin(), v.end(), compare);

    int cnt = 1;
    int i = 0, j = 1;
    while (j < n)
    {
        if (v[i].second < v[j].first)
        {
            cnt++;
            i = j;
            j++;
        }
        else
            j++;
    }

    return (cnt);
}

int main(){
    int start[] = {1, 3, 2, 5};
    int end[] = {2, 4, 3, 6};
    int n = sizeof(start)/sizeof(start[0]);
}