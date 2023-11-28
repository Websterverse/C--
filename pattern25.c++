#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "ENTER THE NUMBER" << endl;
    cin >> n;

    int i = 1; // n - i - 1 // 
        int count = 1 ;

    while (i <= n)
    {

        int space = 1;

        int j = 1;
        while (space <= n - i)
        {
            cout << " ";
            space++;
        }

        while (j <= i)
        {

            cout << count;
            j++;
        }
            count++ ; 
        cout << endl;
        i++;
    }
}