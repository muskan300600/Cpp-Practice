#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<float> v;
    int a[]={12, 2};
    int n = sizeof(a)/sizeof(a[0]);
    int sum=0;
    int count =0;
    float avg;
    for(int i=0;i<n;i++){
        sum = sum+a[i];
        count++;
        avg = float(sum/count);
        v.push_back(avg);
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}