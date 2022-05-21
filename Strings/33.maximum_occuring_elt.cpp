#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string str = "ipnhydgh";
    int arr[256] = {0};
        
        for(int i = 0; i < str.size(); ++i) {
            
            arr[str[i]]++;
        }
        
        int max = INT_MIN;
        char res;
        
        for(int i = 0; i < str.size(); ++i) {
            
            if(arr[str[i]] > max) {
                res = str[i];
                max = arr[str[i]];
            }
            
            else if(arr[str[i]] == max) {
                if(res > str[i]) res = str[i];
            }
        }
        
        cout<< res;
    
}