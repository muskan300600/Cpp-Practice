#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
const int MAX = 1000;
 
int findDuplicate(int arr[], int n, int k)
{
    // Since arr[] has numbers in range from
    // 1 to MAX
    int res = MAX + 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
 
            // set count to 1 as number is present
            // once
            int count = 1;
            for (int j = i + 1; j < n; j++)
                if (arr[i] == arr[j])
                    count += 1;
 
            // If frequency of number is equal to 'k'
            if (count == k)
                res = min(res, arr[i]);
        }
    }
    return res;
}
 
// Driver code
int main()
{
    int arr[] = { 2, 2, 1, 3, 1 };
    int k ;
    cin>>k;
    int n = sizeof(arr) / (sizeof(arr[0]));
    cout << findDuplicate(arr, n, k);
    return 0;
}