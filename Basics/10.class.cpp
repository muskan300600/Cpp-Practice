#include <iostream>
#include <string>
using namespace std;

class Staff
{
public:
    string name;
    int age;
    float salary;

    Staff(string name, int age, float salary, string type)
    {
        this->name = name;
        this->age = age;
        this->salary = salary;
        this->type = type;
    }
    void printName()
    {
        cout << this->name << "," << this->type << endl;
    }
    void printDetails()
    {
        cout << "Animal type is: " << this->type;
    }

private:
    string type;
    int tail;
    int legs;
};

//Inheritance
class Student : public Staff
{
public:
    int roll;
};

int main()
{
    Staff One("arun", 34, 34546, "Man");
    One.printName();

    One.printDetails();
}
