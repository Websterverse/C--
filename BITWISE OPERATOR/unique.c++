#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 3, 4};
    // int size = arr.size() ;
    int count = 0;
    for (int i = 0; i < 5; i++)
    {

        if (arr[i] == arr[i + 1])
        {
            count++;
        }

        else
        {
            cout << arr[i] << endl;
        }
    }
}
