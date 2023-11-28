#include <iostream>
using namespace std;

void add(int a, int b)
{

    cout << "SUM is " << (a + b);
}
void add(double a, double b)
{

    cout << "SUM is " << (a + b);
}
void add(double a, int b)
{

    cout << "SUM is " << (a + b);
}

int main()
{

    add(4, 5);
    cout << endl;
    add(10.23, 5.32);
    cout << endl;
    add(10.23, 10);
}