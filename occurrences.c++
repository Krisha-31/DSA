#include<iostream>
using namespace std;

// Count occurrences of each elements using array

int main()
{
    int arr[5] = {12,13,12,15,12};
    int count = 0;

    int val;
    cout << "Enter the value to find: ";
    cin >> val;

    for(int i = 0; i<5; i++)
    {
        if(arr[i] == val)
        {
            count++;
        }
    }

    cout << "Count is " << count;
}