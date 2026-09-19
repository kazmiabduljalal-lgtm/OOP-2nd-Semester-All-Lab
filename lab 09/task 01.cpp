#include<iostream>
using namespace std;

// creating distance class

class Distance
{
private:
    int feet;
    int inches;
public:

    Distance(int f, int i)
    {
    feet = f;
    inches = i;
    }

    bool operator == (Distance d)
    {
    if(feet == d.feet && inches == d.inches)
    {
            return true;
        }
        else
        return false;
    }
};

int main()
{
    Distance D1(12, 6);
    Distance D2(8, 22);

    if(D1 == D2)
    {
    cout << "Distances are equal. ";
    }
    else
    {
    cout<<"Distances are not equal. ";
    }

    return 0;
}
