#include <iostream>
using namespace std;

class Square 
{
protected:
    int num;

public:
    void setNumber(int n)
    {
        num = n;
    }

    int computeSquare() 
    {
        return num * num;
    }
};

class Cube : public Square 
{
public:
    int computeCube() 
    {
        return computeSquare() * num;
    }
};

int main() 
{
    Cube obj;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    obj.setNumber(n);

    cout << "Square: " << obj.computeSquare() << endl;
    cout << "Cube: " << obj.computeCube() << endl;

    return 0;
}
