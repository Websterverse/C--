#include <iostream>
using namespace std;

// int main() {
// int a =10 ;
// int &ref = a ;

// cout << ref  << endl  ;
// ref = 20 ;
// cout << ref ;

// cout << a << endl ;

// a = 100 ;
// cout << ref ;
// }

// void swap(int &n, int &m)
// {
//     int temp = n;
//     n = m;
//     m = temp;

//     // m = 100 ;
// }

void pointer (int *p){
*p = 20 ;

}

int main()
{

    // int a = 10;
    // int b = 20;

    // cout << "A = " << a << endl;
    // cout << "B = " << b << endl;

    // cout << "AFTER SWAPPING" << endl;

    // swap(a, b);
    // cout << "A = " << a << endl;
    // cout << "B = " << b << endl;

int a = 100 ; 

pointer(&a);
cout<< a << endl ; 


}