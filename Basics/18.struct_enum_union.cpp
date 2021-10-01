#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int age;
    string name;
} emp; //creating structure instance

union money
{
    int amount;
    int number;
};

int main()
{
    //Structure Implementation
    struct Employee e1;
    e1.name = "Ram";
    e1.age = 18;
    cout << e1.name << endl;

    //Union Implementation
    union money m2;
    m2.amount = 57268;
    cout << m2.amount << endl;

    //Enum Implementation
    enum meal
    {
        breakfast,
        lunch,
        dinner
    };
    meal m1 = lunch;
    cout << m1;
}