#include <iostream>
using namespace std;

//global variable
int var=6;
void sum(){
    int sum;
    cout<< var;
}

int main()
{
    //local variable
    int car=9;
    var=10;
    sum();
}


