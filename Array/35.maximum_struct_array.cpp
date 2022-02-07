#include <iostream>
#include <vector>
using namespace std;

struct Height{
    int feet;
    int inches;
};

int findMax(Height arr[],int n){
    int max=0;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        x = arr[i].feet*12 + arr[i].inches;
        v.push_back(x);
    }
    
    for(int i=0;i<v.size();i++){
        if(v[i]>max){
            max=v[i];
        }
    }
    return max;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,temp1,temp2;
        cin>>n;
        Height arr[n];
        for(int i=0;i<n;i++){
            cin>>temp1>>temp2;
            arr[i].feet=temp1;
            arr[i].inches = temp2;
        }
        int res = findMax(arr,n);
        cout<<res<<endl;
    }
}