#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
using namespace std;

int main()
{
    long long arr[]={6, 8, 4, 5, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<long long int> v;
    for(int i=0;i<n;i++){
        v.push_back(arr[i]);
    }
    sort(v.begin(),v.end());

    long long val1=0,val2=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            val1 = val1*10+v[i];
        }
        else{
            val2 = val2*10+v[i];
        }
    }
    cout<<val1+val2;
}