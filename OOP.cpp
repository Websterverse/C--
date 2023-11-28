#include <iostream>
using namespace std;

class emp
{

private:

    int a, b, c;

public:
    int d, e;

    void setdata(int a1, int b1, int c1 , int d1 , int e1 ); // dec

    void getdata()
    {

        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
        cout << e << endl;
    }
};

void emp ::setdata(int a1, int b1, int c1 , int d1 , int e1)
{
    a = a1;
    b = b1;
    c = c1;
    d  = d1 ;
    e = e1 ; 

    // int a = a1 ;
}

int main()
{

    emp e1;
    // e1.d = 12;
    // e1.e = 20;



    e1.setdata(1, 2, 3, 4 ,5 );
    e1.getdata();
}