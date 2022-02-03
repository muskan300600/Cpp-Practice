#include <iostream>
#include <vector>
using namespace std;

void byOne(int arr[], int n){
    int temp = arr[0],i;
    for(int i=0;i<n;i++)
        arr[i]=arr[i+1];
    arr[n-1]=temp;
    }

void rotate(int arr[],int n,int d){
    for(int i=0;i<d;i++){
        byOne(arr,n);
    }
}

int main(){
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    int t;
    cout<<"Enter the number: "<<endl;
    cin>>t;

    rotate(a,n,t);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}

// using vectors
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,d;
//         cin>>n>>d;
//         vector<int> arr;
//         for(int i=0;i<n;i++){
//             int x;
//             cin>>x;
//             arr.push_back(x);
//         }

//         rotate(arr.begin(),arr.begin()+d,arr.end());

//         for(int j=0;j<n;j++){
//             cout<<a[j]<<" ";
//         }
//         cout<<endl;        
//     }
// }