#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main(){
    int arr[] = {5, 9, 6, 8, 6, 4, 6, 9, 5, 4, 9 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int brr[n];
    int crr[n];
    stack<int> s;
    stack<int> s1;
    for(int i=0;i<n;i++){
        while(!s.empty() && arr[s.top()-1]<=arr[i]){
            s.pop();
        }
        if(s.empty()){
            brr[i]=0;
        }
        else{
            brr[i]=s.top();
        }
        s.push(i+1);
    }

    // while(!s.empty()){
    //     s.pop();
    // }
    
    
    for (int j = n-1; j >= 0; j--)
    {
        while (!s1.empty() && arr[s1.top()-1]<=arr[j])
        {
            s1.pop();
        }
        if (s1.empty())
        {
            crr[j] = 0;
        }
        else
            crr[j] = s1.top();
        s1.push(j+1);
    }
    
    int maxProd = INT_MIN;
    for(int i=0;i<n;i++){
        int val = brr[i]*crr[i];
        maxProd = max(maxProd,val);
    }

    for(int i=0;i<n;i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<crr[i]<<" ";
    }
    cout<<endl;

    cout<<maxProd;
}