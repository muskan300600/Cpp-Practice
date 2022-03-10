#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr[] = {4, 7, 3, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    for(int i=n-1;i>=0;i--)
        v.push_back(arr[i]);
    int i=0;
    int j=0;
    while(n>=2){
        j=n-1;
        while(j>0){
            v.push_back(v[i]+v[i+1]);
            i++;
            j--;
        }
        i++;
        n--;
    }
    reverse(v.begin(), v.end());

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}