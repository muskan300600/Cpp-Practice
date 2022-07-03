#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cin >> k;
    int val;
    // for (int i = 0; i <= n - k; i++)
    // {
    //     if (arr[i] < 0)
    //         val = arr[i];
    //     else
    //     {
    //         val = 0;
    //         for (int j = 1; j < k; j++)
    //         {
    //             if (arr[i + j] < 0)
    //             {
    //                 val = arr[i + j];
    //                 break;
    //             }
    //         }
    //     }
    //     cout << val << " ";
    // }

    queue<int> q;
    vector<int> v;
    for(int i=0;i<k;i++){
        if(arr[i]<0) q.push(arr[i]);
    }

    if(q.size()==0) v.push_back(0);
    else v.push_back(q.front());

    for(int i=k;i<n;i++){
        if(arr[i-k]<0) q.pop();
        if(arr[i]<0) q.push(arr[i]);
        
        if(q.size()==0) v.push_back(0);
        else v.push_back(q.front());
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}