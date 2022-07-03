#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int arr[] = {2, 1, 7, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max;
    int sum = 0, index = 0;
    int k;
    cin >> k;
    while (k--)
    {
        max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
                index = i;
            }
        }

        sum = sum + max;
        
        arr[index] = max / 2;
        
    }
    cout << sum;

    //Optimized Solution

    // priority_queue<int> pq;
    // for(int i=0;i<n;i++){
    //     pq.push(arr[i]);
    // }
    
    // int sum=0;
    // for(int i=0;i<k;i++){
    //     int p = pq.top();
    //     pq.pop();
    //     sum = sum+p;
    //     pq.push(p/2);
    // }
    // cout<<sum;
}