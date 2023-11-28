#include <iostream>
using namespace std;

class emp
{

public:
    int a;

public:
    // int sum(emp e1, emp e2)
    // {
    //     emp e3;

    //     e3.a = e1.a + e2.a;
    //     return e3.a;
    // }
    emp sum(emp e1, emp e2)
    {
        emp e3;

        e3.a = e1.a + e2.a;
        return e3;
    }

    void setdata(void)
    {
        cout << "ENTER THE DATA \n";
        cin >> a;
    }

    void getdata(void)
    {

        cout << "THE DATA IS " << a;
    }
};

int main()
{

    emp E1, E2, E3;

    E1.setdata();
    E1.getdata();
    E2.setdata();
    E2.getdata();

    E3 = E3.sum(E1, E2);

    cout << "THE DATA IS  " << E3.a << endl;
}