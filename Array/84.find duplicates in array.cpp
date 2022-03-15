#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n = 5;
    int arr[] = {2, 3, 1, 2, 3};
    int a[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        a[i] = {0};
    }
    for (int i = 0; i < n; i++)
    {
        a[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 1)
        {
            v.push_back(i);
        }
    }
    if (v.size() == 0)
        v.push_back(-1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

//Using o(1) space complexity
// for(int i=0;i<n;i++){
//     arr[arr[i]%n] = arr[arr[i]%n]+n;
// }
// for(int i=0;i<n;i++){
//     if(arr[i]/n>1) v.push_back(i);
// }