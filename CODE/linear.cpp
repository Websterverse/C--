#include <iostream>
using namespace std;

bool linear_search(int arr[], int key, int size)
{

    for (int i = 0; i < size; i++)
    {

        if (key == arr[i])
        {

            return true;
        }
    }

    return false;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int key = 1;
    int size = 5;

    bool search = linear_search(arr, key, size);

    if (search)
    {
        cout << "KEY IS PRESENT IN AN ARRAY : " << key << endl;
    }

    else
    {

        cout << "KEY IS ABSENT IN AN ARRAY : " << key << endl;
    }
}