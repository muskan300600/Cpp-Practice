# include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3};
    cout<<arr[0];
    int brr[3]={4,5,6};

    int i;
    cout<<"enter the length of the array: ";
    cin>>i;
    int marks[i];
    int sum=0;
    for(int j=0;j<i;j++){
        cout<<"enter the marks of "<<j<<"th student "<<endl;
        cin>>marks[j];
        sum=sum+marks[j];
    }
    cout<<"the sum of marks obtained is"<<sum;
}