#include <iostream>
using namespace std;

void swap_alternate(int arr[] , int size){

int temp ;
  for (int i = 0; i < 6; i += 2)
    {

        if (arr[i + 1] < size)
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    for (int i = 0; i < 6; i++)
    {

        cout << arr[i] << " ";
    }


}





int main()
{
    int size = 6;
    int arr[6] = {1, 2, 3, 4, 5, 6};
   
swap_alternate(arr ,  size);



}
