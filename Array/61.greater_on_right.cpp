#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {2, 3, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int max = -1;
    vector<int> v;
    while (start != n)
    {
        for (int i = start + 1; i < n; i++)
        {
           if(arr[i]>max){
               max = arr[i];
           }
        }
        v.push_back(max);
        start++;
        max=-1;
    }
    
    for(int i=0;i<v.size();i++){
        arr[i]=v[i];
        cout<<arr[i]<<" ";
    }

    // int max = arr[n-1];
    // arr[n-1]=-1;
    // for(int i=n-2;i>=0;i--){
    //     int temp = arr[i];
    //     arr[i]=max;
    //     if(temp>max){
    //         max = temp;
    //     }
    // }

}