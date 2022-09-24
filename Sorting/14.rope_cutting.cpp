#include <iostream>
#include <algorithm>
using namespace std;

int main(){
   int arr[] = {5, 1, 1, 2, 3, 5};
   int n = sizeof(arr)/sizeof(arr[0]);
   vector<int> res;
   sort(arr,arr+n);
   for(int i=0;i<n;i++){
       if(arr[i]==arr[i+1]) continue;
       else res.push_back(n-i-1);
   }

   for(int i=0;i<res.size();i++){
       cout<<res[i]<<" ";
   }
}