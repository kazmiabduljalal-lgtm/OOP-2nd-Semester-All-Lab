#include <iostream>
using namespace std;
class Display
{
private:
    int lastResult;

public:
    Display()
    {
        lastResult = 0;
    }

    void showResult(int result)
    {
        lastResult = result;
        cout << "Result: " << lastResult << endl;
    }

    void showLastResult()
    {
        cout << "Last Result: " << lastResult << endl;
    }
};

class Calculator
{
private:
    Display display; 

public:
    int add(int a, int b)
    {
        int result = a + b;
        display.showResult(result);
        return result;
    }

    int multiply(int a, int b)
    {
        int result = a * b;
        display.showResult(result);
        return result;
    }

    void showLast()
    {
        display.showLastResult();
    }
};

int main()
{
    Calculator calc;

    calc.add(7, 3);
    calc.multiply(4, 2);

    calc.showLast();

    return 0;
}
