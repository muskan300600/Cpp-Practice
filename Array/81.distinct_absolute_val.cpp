#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr[]={-3, -2, 0, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    vector<int> v1;
    for(int i=0;i<n;i++){
        v.push_back(abs(arr[i]));
    }
    int count_1=0;
    int count_d = 0;
    
    for(int i=0;i<v.size();i++){
        v1.push_back(count(v.begin(),v.end(),v[i]));
        if(v[i]==1){
            count_1++;
        }
        else count_d++;
    }
}