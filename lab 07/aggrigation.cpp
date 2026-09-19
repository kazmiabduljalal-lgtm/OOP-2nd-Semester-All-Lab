#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int multiply(int a, int b)
    {
        return a * b;
    }
};

class Student
{
private:
    string name;
    Calculator *calculator; 

public:
    Student(string n, Calculator *c)
    {
        name = n;
        calculator = c;
    }

    void performAddition(int a, int b)
    {
        cout << name << " Addition Result: "
             << calculator->add(a, b) << endl;
    }

    void performMultiplication(int a, int b)
    {
        cout << name << " Multiplication Result: "
             << calculator->multiply(a, b) << endl;
    }
};

int main()
{
    Calculator sharedCalculator;

    Student s1("Ali", &sharedCalculator);
    Student s2("Ahmed", &sharedCalculator);

    s1.performAddition(5, 2);
    s2.performMultiplication(3, 4);

    return 0;
}
