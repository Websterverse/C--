#include <iostream>
using namespace std;

// forward delcaration //
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    // int sumcomplexreal(complex o1 , complex o2){
    // return(o1.a + o2.a);
    // }

    int sumcomplexreal(complex, complex);
};

class complex
{
    int a, b;
    friend int calculator ::sumcomplexreal(complex o1, complex o2);

public:
    void setnumber(int x, int y)
    {
        a = x;
        b = y;
    }

    void print()
    {
        cout << a << b << endl;
    }
};

int calculator ::sumcomplexreal(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int main()
{

    complex c1, c2;

    c1.setnumber(10, 220);
    c1.print();
    c2.setnumber(20, 90);
    c2.print();

    calculator calci;

    int res = calci.sumcomplexreal(c1, c2);

    cout << "THE ANSWER IS " << res << endl;

    return 0;
}
