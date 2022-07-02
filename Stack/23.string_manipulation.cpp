#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>

int main(){
    int n;
    cin>>n;
    string s;
    int ans=0;
    vector<string> v;
    vector<int> v1;
    for(int i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }

    for(int i=0;i<n;i++){
       v1.push_back(count(v.begin(),v.end(),v[i]));
        //cout<<v1[i]<<ends;
    }

    for(int i=0;i<v.size();i++){
        if(v1[i]==1){
            ans++;
        }
    }

    cout<<ans;

    // stack<string> st;
    
    // for(int i = 0; i < arr.size(); i++)
    // {
    //     if(!st.empty() and st.top() == arr[i])
    //     {
    //         st.pop();
    //     }
    //     else
    //     {
    //         st.push(arr[i]);
    //     }
    // }
    
    // cout<<st.size();   

}