#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr[] = {3, 2, 1, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k =2;
    int count = n,i=0,sum1=0,sum2=0;
    vector<int> v;
    while(count>0){
        sum1+=arr[i];
        sum2+=arr[n-i-1];
        count = count-k-1;
        i++;
    }
    v.push_back(sum1);
    v.push_back(sum2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}