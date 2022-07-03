#include <iostream>
#include <algorithm>
#include <deque>
#include <stack>
#include <string>
#include<vector>
using namespace std;

vector<int> printKMax(int arr[], int n, int k)
{
    vector<int> v;
    deque<int> q;
    for(int i=0;i<n;i++){
        if(q.empty() && q.front()==i-k)
            q.pop_front();
        while(!q.empty() && arr[i] >= arr[q.back()])

            q.pop_back();

        q.push_back(i);

        if(i >= k-1) v.push_back(arr[q.front()]);
    }
    return v;

    //  deque <int> dq;
    //     vector <int> ans;
        
    //     for (int i = 0; i < k; i++){
            
    //         while (!dq.empty() && arr[dq.back()] <= arr[i]){
    //             dq.pop_back();
    //         }
            
    //         dq.push_back(i);
    //     }
        
    //     ans.push_back(arr[dq.front()]);
        
    //     for (int i = k; i < arr.size(); i++){
    //         int last_pos = i-k+1;
    //         while (!dq.empty() && dq.front() < last_pos){
    //             dq.pop_front();
    //         }
            
    //         while (!dq.empty() && arr[dq.back()] <= arr[i]){
    //             dq.pop_back();
    //         }
            
    //         dq.push_back(i);
    //         ans.push_back(arr[dq.front()]);
    //     }
        
    //     return ans;
    // }
}

int main()
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cin >> k;
    printKMax(arr, n, k);

    //Naive Approach
    // int max;
    // priority_queue<int> pq;
    // for(int i=0;i<=n-k;i++){
    //     max = arr[i];
    //     for(int j=1;j<k;j++){
    //         if(arr[i+j]<max){
    //             max = arr[i+j];
    //         }
    //     }
    //     cout<<max<<" ";
    // }
}