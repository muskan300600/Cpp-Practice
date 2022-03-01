#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int a[] = {3, 4, 5};
    int b[] = {4, 4, 5};
    int n = sizeof(a)/sizeof(a[0]);
    int k;
    cout<<"Enter a number: ";
    cin>>k;
    
   
    vector<int> v1;
    for(int i=0;i<n;i++){
        int val=0;
        val = k/a[i];
        v1.push_back(b[i]*val);
    }


    int max=0;
    for(int i=0;i<n;i++){
        if(v1[i]>max){
            max = v1[i];
        }
    }

    cout<<max;
}