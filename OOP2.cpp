#include <iostream>
using namespace std;

class shop
{

    int price[10];
    int id[10];
    int counter;

public:
    void initial(void)
    {
        counter = 0;
    }

    void setdata(void);
    void display(void);
};

void shop ::setdata()
{

    cout << "ENTER THE ID " << counter + 1 << endl;
    cin >> id[counter];
    cout << "ENTER THE PRICE " << endl;
    cin >> price[counter];

    counter++;
}

void shop ::display()
{

    for (int i = 0; i < counter; i++)
    {

        cout << "ID & PRICE  : " << id[i] << " " << price[i] << endl;
    }
}

int main()
{

    shop s1;

    s1.initial();
    s1.setdata();
    s1.setdata();
    s1.setdata();
    s1.display();
}
