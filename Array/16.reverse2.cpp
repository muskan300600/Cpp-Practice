#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n;
	int a[n];
	for(int i=0;i<t;i++){
	    cin>>n;
	    for(int j=1;j<=n;j++){
	        cin>>a[j];
	    }
	    for(int j=n;j>0;j--){
	    cout<<a[j]<<" ";
    	}
    	cout<<endl;
	}
	
	
	return 0;
}