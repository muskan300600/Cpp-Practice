#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[] = { 1, 2, 1, 2, 1, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v1;
    int sum1=0;
    vector<int> v2;
    int sum2=0;
    for(int i=0;i<n/2;i++){
        v1.push_back(arr[i]);
        sum1 = sum1+arr[i];
    }

    for(int i=n/2;i<n;i++){
        v2.push_back(arr[i]);
        sum2 = sum2+arr[i];
    }
    
    // for(int i=0;i<v1.size();i++){
    //     cout<<v1[i]<<" ";
    // }
    // cout<<endl;

    // for(int i=0;i<v2.size();i++){
    //     cout<<v2[i]<<" ";
    // }

    if(sum1>sum2){
        cout<<sum1-sum2;
    }
    else{
        cout<<sum2-sum1;
    }

}