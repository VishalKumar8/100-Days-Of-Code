#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;
    bool gender;

    student()
    {
        cout << "Default Constructor" << endl;
    }

    student(string s, int a, int g)
    {
        cout << "parameterised Constructor" << endl;
        name = s;
        age = a;
        gender = g;
    } // parameterised Constructor

    student(student &a)
    {
        cout << "Copy Constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~student()
    {
        cout << "Destructor called" << endl;
    }

    void getName()
    {
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }

    void printInfo()
    {
        cout << "Name: ";
        cout << name << endl;
        cout << "Age: ";
        cout << age << endl;
        cout << "Gender: ";
        cout << gender << endl;
    }

    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    student a("Ankit", 21, 1);
    // a.getName();
    // a.printInfo();

    student b;

    // student c(a);    Copy Constructor
    student c = a;

    if (c == a)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Not same" << endl;
    }

    return 0;
}