#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "ENTER THE NUMBER" << endl;
    cin >> n;

    int i = n; // n - i - 1 // 

    while (i >= 1)
    {

        int space = 1;

        int j = i;
        // while (space <= n - i)
        // {
        //     cout << " ";
        //     space++;
        // }

        while (j >= 1)
        {

            cout << "*";
            j--;
        }
        cout << endl;
        i--;
    }
}