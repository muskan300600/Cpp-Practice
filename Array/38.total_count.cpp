#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[] = {10, 2, 3, 4, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter threshold: "<<endl;
    cin>>k;
    int x;
    int count = 1;
    vector<int> v;
    for(int i=0;i<n;i++){
        while(arr[i]>k){
            arr[i] = arr[i]-k;
            count++;
        }
        v.push_back(count);
        count = 1;
    }

    int sum=0;
    for(int i=0;i<v.size();i++){
        sum = sum+v[i];
    }
    cout<<sum;
}