#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int key = 10;
    int low = 0;
    int high = 4;
    int flag = 0;

    int mid;

    while (low <= high)
    {

        mid = (low + high) / 2;

        if (arr[mid] == key)
        {

           
            flag++;
            break;
        }

        if (arr[mid] > key)
        {

            high = mid - 1;
        }

        else
        {
            low = mid + 1;
        }
    }

    if (flag)
    {

        cout << "KEY IS PRESENT ";
    }

    else
    {

        cout << "KEY IS NOT PRESENT ";
    }
}
