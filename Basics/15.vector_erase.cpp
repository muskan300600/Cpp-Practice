#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int value;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>value;
        v.push_back(value);
    }

    int a,b,c;
    cin>>a>>b>>c;
    v.erase(v.begin()+a-1);
    v.erase(v.begin()+a-1,v.begin()+b-1);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}