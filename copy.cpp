#include <iostream>
using namespace std;

class number
{
    int a;

public:
    void setdata(int b)
    {
        a = b;
    }

    void getdata()
    {
        cout << "the value  of a is -> " << a << endl;
    }

    number()
    {
    }

    number(number &obj)
    { // explicit copy construtor

        cout << "helo";
        a = obj.a;
    }
};

int main()
{

    number n1;
    n1.setdata(20);
    n1.getdata();

    number n2(n1); // implicite copy constructor //
    n2.getdata();

    number n3(n1);
    n3.getdata();

    number n4 = n1;
    n4.getdata();
}