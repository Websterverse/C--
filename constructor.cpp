#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void)
    {
        a = 10;
        b = 20;
    }

complex(int x , int y  = 1331){
a = x ;
b = y ;

}

    void print(void)
    {
        cout << a <<  endl <<  b << endl;
    }
};

int main()
{

    complex c1(1); // implicite call 
    complex c2;
// complex c1 = complex(100 , 200 ) ;   // explicite call // 

    c2.print() ;
    c1.print();
}