#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N = 11;
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} ;
    int idx=0,target=0,jump=0,temp=0;
    while(idx<N && target<N-1){
        while(idx<=target){
            temp = max(temp,arr[idx]+idx);
            idx++;
        }
        if(temp<=target){
            jumps=-1;
            break;
        }
        target=temp;
        jump++;
    }
    cout<<jump;
}