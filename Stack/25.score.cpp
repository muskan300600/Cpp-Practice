#include<iostream>
#include<stack>
#include<vector>
#include <algorithm>
using namespace std;

void printSmall(vector<int> &con){
   stack<int>s;
   vector<int> ans;
   ans.push_back(-1);
   s.push(con.size()-1);
   for(int i = con.size()-2;i>=0;i--){
       while(!s.empty() && con[s.top()] >= con[i]){
           s.pop();
       }
       s.empty() ? ans.push_back(-1):ans.push_back(s.top()+1);
       s.push(i);
   }
   reverse(ans.begin(),ans.end());
   for(int i = 0;i<ans.size();i++){        
       cout<<ans[i]<<" ";
   }
}

int main() {

int test;                                                       
cin>>test;
while(test--){
    int size;
       vector<int> v;                                  
       cin>>size;
       for(int i = 0;i<size;i++){
           int x;
           cin>>x;
           v.push_back(x);
       }
       printSmall(v);                                     
       cout<<endl;
}
return 0;
}