#include <iostream>
using namespace std;

int main()
{

    int n = 3;
    int count = 0;
    int array[3] = {0, 0, 0};

    int i, j;

    for (i = 0; i < n; i++)
    {
        int temp = 0;

        for (j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }

        if (array[i] == 0)
        {
            count++;
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << array[i];
    }

    cout << endl;
    cout << "NUMBER OF ZEROS : " << count << endl;

    if (count == 1)
    {
        int space = 0;
        for (i = 0; i < n - count - 1; i++)
        {
            space = array[i + 1];
            array[i + 1] = array[i];
            array[i] = space;
        }
    }

    if (count == 2)
    {
        int space = 0;
        for (i = 0; i < n - count; i++)
        {
            space = array[i + count];
            array[i + count] = array[i];
            array[i] = space;
        }
    }

    cout << "AFTER LOGIC " << endl;
    for (i = 0; i < n; i++)
    {
        cout << array[i];
    }
}
