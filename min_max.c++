#include <iostream>
using namespace std;

// Find the minimum and maximum elements in array

int main()
{
    int arr[5] = {10, 12, 4, 8, 2};
    int min = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << min;

    /*int arr[5] = {10,12,4,8,2};
    int max = arr[0];

    for(int i = 0; i<5 ; i++)
    {
     if(arr[i] < max)
     {
         min = arr[i];
     }
    }

    cout << max;*/
}