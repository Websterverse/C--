#include <iostream>
using namespace std;

int getmin(int arr[], int size)
{

    int min = arr[0];

    for (int i = 1; i < size; i++)
    {

        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    return min;
}

int getmax(int arr[], int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }

    return max;
}

int main()
{

    int arr[] = {10, 230, 1, 4400, 100000};
    int king[] = {12, 2, 4, 6, 7, 8, 45, 7, 5, 3};

    cout << getmax(arr, 5);
    cout << endl;
    cout << getmax(king, 10);
    cout << endl;
cout << getmin(arr , 5);
    cout << endl;
cout << getmin(king , 10);

}