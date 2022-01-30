#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a[] ={1, 2, 3, 4, 5, 5};
    int n= sizeof(a)/sizeof(a[0]);
    int start=0;
    int end=0;
    int key;
    cout<<"Enter the value to search"<<endl;
    cin>>key;
    for(int i=0;i<n;i++){
        if (a[i]==key){
            start=i;
        }
    }

    for(int i=n-1;i>=0;i--){
        if(a[i]==key){
            end=i;
        }
    }

    cout<<end<<" "<<start;
}
