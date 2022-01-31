#include <iostream>
#include <string>

#include <algorithm>
using namespace std;


int main(){
    int n;
    cin>>n;
  
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    if(count>3){
        cout<<"Not Fascinating"<<endl;
        exit(0);
    }
    
    string str = to_string(n) + to_string(n*2) + to_string(n*3);
    if(str.length() != 9)
            cout<< "Not fascinating"<<endl;
        for(int i=1; i<=9; ++i){
            if(str.find(to_string(i))<0 || str.find(to_string(i))>8)
                cout<<"Not Fascinating"<<endl;
        }
    cout<<"Fascinating"<<endl;
        
}
