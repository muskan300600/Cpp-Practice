#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>

int main(){
    int arr[] = {2,4,8,7,7,9,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int brr[n];
    int crr[n];
    stack<int> s;
    stack<int> s1;
    
    for(int i=0;i<n;i++){
        while(!s.empty() && s.top()>=arr[i]){
            s.pop();
        }
        if(s.empty()){
            brr[i]=0;
        }
        else{
            brr[i]=s.top();
        }
        s.push(arr[i]);
    }
    
    
    for (int j = n-1; j >= 0; j--)
    {
        while (!s1.empty() && s1.top() > arr[j])
        {
            s1.pop();
        }
        if (s1.empty())
        {
            crr[j] = 0;
        }
        else
            crr[j] = s1.top();
        s1.push(arr[j]);
    }
    
    int max=INT_MIN;
       
       for(int i=0;i<n;i++){
           int diff=abs(brr[i]-crr[i]);
           if(diff>=max){
               max = diff;
           }
       }
       cout<<max;
}