#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    long long arr[]={4, 2, 7, 6, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<long long> v;
    vector<long long> v1;
    for (int i = 0; i < n; i++)
    {
        v.push_back(arr[i]);
    }

    sort(v.begin(), v.end());

    long long sum = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        sum = sum + v[i];
        v1.push_back(sum);
    }

    long long res = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
        //res = res + v1[i];
    }
   // cout<<res;
}
