#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string arr[] = {"aff","sgdh","uwdguwqhid","b"};
    int n = sizeof(arr)/sizeof(arr[0]);
    string max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i].length()>max.length()){
            max = arr[i];
        }
    }
    cout<<max;
}