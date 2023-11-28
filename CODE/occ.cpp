#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 2, 4, 3 };

    int i = 0;

    while (i < 5)
    {

        int count = 1;

        for (int j = i + 1; j < 5; j++)
        {

            if (arr[i] == arr[j])
            {
                count++;
            }

            else
            {
                break;
            }
        }

        if (count != 1)
        {
            cout << arr[i];
        }
        i = i + count;
    }
}