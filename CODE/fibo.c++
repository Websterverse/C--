#include <iostream>
using namespace std;

int main()
{

    int fib1 = 0;
    int fib2 = 1;

    int n;
    cout << "ENTER THE NUMBER : ";
    cin >> n;

    cout << fib1 << " ";
    cout << fib2 << " ";

    for (int i = 1; i <= n; i++)
    {

        int next = fib1 + fib2;

        fib1 = fib2;
        fib2 = next;

        cout << next << " ";
    }
}
