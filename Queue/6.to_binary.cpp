#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
using namespace std;

// string toBinary(int n){
//     string str;
//     while(n){
//         str = str+to_string(n%2);
//         n=n/2;
//     }
//     reverse(str.begin(),str.end());
//     return str;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<string> s;
//     for(int i=1;i<=n;i++){
//         s.push_back(toBinary(i));
//     }

//     for(int i=0;i<s.size();i++){
//         cout<<s[i]<<ends;
//     }
// }

//Using queue
int main(){
    int n;
    cin>>n;
    vector<string> v;
    queue<string> q;
    q.push("1");
    for(int i=0;i<n;i++){
        string curr = q.front();
        q.pop();
        v.push_back(curr);
        q.push(curr+"0");
        q.push(curr+"1");
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

