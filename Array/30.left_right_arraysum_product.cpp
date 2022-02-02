#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[] = {4,5,6};
    vector<int> v1;
    vector<int> v2;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n/2;i++){
        v1.push_back(arr[i]);
    }

    for(int i=n-1;i>=n/2;i--){
        v2.push_back(arr[i]);
    }

    // for(int i=0;i<v1.size();i++){
    //     cout<<v1[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<v2.size();i++){
    //     cout<<v2[i]<<" ";
    // }
    // cout<<endl;

    int sum1=0,sum2=0;
    for(int i=0;i<v1.size();i++){
        sum1 = sum1+v1[i];
    }
    for(int i=0;i<v2.size();i++){
        sum2 = sum2+v2[i];
    }

    cout<<sum1*sum2;

}