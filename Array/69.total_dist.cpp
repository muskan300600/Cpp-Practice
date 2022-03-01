#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr[] = {5, 1, 4, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int num = 1;
    vector<int> v;
    while(num<=n){
        for(int i=0;i<n;i++){
            if(arr[i]==num){
                v.push_back(i);
                num++;
            }
        }
    }
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum = sum + abs(v[i]-v[i+1]);
    }

    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }

    cout<<sum;

// long long res = 0;
// int a[n];
// for(int i=0; i<n; i++){
//     int x=arr[i];
//     a[x-1]=i+1;
//      }
// long long sum=0;
// for(int i=0; i<n-1;i++){
//     if(a[i]>a[i+1])
//        sum+=(a[i]-a[i+1]);
// else sum+=(a[i+1]-a[i]);
// }
// return sum;

}