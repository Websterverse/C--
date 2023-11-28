#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int temp = 0;
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {

        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    reverse(arr, size);
}