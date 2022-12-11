#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int row = 3, col = 4;
    int M[][] = {{1 ,1, 0, 1},{1, 0, 0, 1},{1 ,1, 0, 1}};
    vector<vector<int,int>> v;
    string str="";
    unordered_set<string,int> st;
    for(int i=0;i<row;i++){
        str="";
        vector<int> t;
        for(int j=0;j<col;j++){
            str+=(M[i][j]);
            t.push_back(M[i][j]);
        }
        if(st.find(str)!=s.end){
            continue;
        }
        st.insert(str);
        v.push_back(t);        
    }
    for(int i=0;i<v.size();i++){
        for(int x:v[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }

}