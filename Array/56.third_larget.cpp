#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int a[]={2,7,6,1,5,9};
    int n = sizeof(a)/sizeof(a[0]);
    int max1=a[0], max2 = a[0], max3 = a[0];
        
        for(int i = 0; i < n; i++)
        {
            if(a[i] > max1)
            {
                max3 = max2;
                max2 = max1;
                
                max1 = a[i];
            }
            else if(a[i] > max2)
            {
                max3 = max2;
                
                max2 = a[i];
            }
            else if(a[i] > max3)
            {
                max3 = a[i];
            }
        }
        
        cout<< max3;

    
}