#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[]={15,2,45,4,67,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n;i++){
    //     if(arr[i]==i+1){
    //         cout<<i+1<<" ";
    //     }
    // }

    //Using Vector
    vector<int> v;
    for(int i=0;i<n;i++){
        if(arr[i]==i+1){
            v.push_back(i+1);
        }
    }
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}