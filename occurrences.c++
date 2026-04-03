#include<iostream>
using namespace std;

// Count occurrences of each elements using array

int main()
{
    int arr[5] = {10,20,50,20,10};
    int count = 0;
    int val;
    cout << "Enter the value:";
    cin >> val;

    for(int i = 0; i<5; i++)
    {
        if(arr[i] == val)
        {
            count++;
        }
    }

    cout << "count is " << count;
}