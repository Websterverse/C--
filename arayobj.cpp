#include <iostream>
using namespace std;

class shop
{

    int id;

public:
    void setdata(void)
    {
        cout << "ID - >  " << endl;
        cin >> id;
    }

    void getdata(void)
    {
        cout << "ID IS -> " << id << endl;
    }
};

int main()
{

    shop s[3];

    for (int i = 0; i < 3; i++)
    {

        s[i].setdata();
        s[i].getdata();
    }
}
