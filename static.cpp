#include <iostream>
using namespace std;

// static members in class

class shop
{

    int id;
    static int counter;
    //  int counter = 0 ;

    // static void show(void);

public:
    void setdata(void)
    {
        cout << "ENTER THE ID OF THE COUNTER  " << counter + 1 << endl;
        cin >> id;
        counter++;
    }

    void getdata(void)
    {
        cout << " THE ID is ->  " << id << endl;
        // cin >> id ;
    }

    static void show(void);
};

int shop ::counter;

void shop ::show(void)
{

    cout << "COUNTER IS ->  " << counter << endl;
}

int main()
{

    shop zomato, swiggy, shopzy, flikart;

    zomato.setdata();
    zomato.getdata();
    // zomato.setdata();

    swiggy.setdata();
    swiggy.getdata();

    shopzy.setdata();
    shopzy.getdata();

    flikart.setdata();
    flikart.getdata();

    // flikart.show() ;
    shop::show();
}
