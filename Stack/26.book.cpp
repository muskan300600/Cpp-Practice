#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int q;
	    cin>>q;
	    stack<string> s;
	    while(q--){
	        string type;
	        cin>>type;
	        if(type=="place"){
	            string num;
	            cin>>num;
	            s.push(num);
	        }
	        else{
	            string x;
	            if(s.empty()){
	                x = "-1";
	            }
	            else{
	                x=s.top();
	                s.pop();
	            }
	            cout<<x<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}