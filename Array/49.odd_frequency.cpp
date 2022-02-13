#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){
    int a[]={5, 7, 2, 7, 5, 2, 5};
    int n = sizeof(a)/sizeof(a[0]);
    int j=0;
    int count=0;
    while(j<n){
        for(int i=0;i<n;i++){
            if(a[i]==a[j]){
                count++;
            }
        }
        
        if(count%2==1){
            cout<<a[j]<<endl;
            break;
        }
        else{
            j++;
        }
    }

    //using XOR
    // int res = arr[0];
        
    //     for(int i = 1; i < n; i++)
    //     {
    //         res ^= arr[i];
    //     }
        
    //     return res;
}
