#include<iostream>
using namespace std;

// Perform sum, average in given elements of array

int main()
{
    int arr[5] = {10,15,20,25,30};
    int count = 0;

    for(int i = 0; i<5; i++)
    {
        count += arr[i];
    }

    cout << "Sum is " << count << endl;
    cout << "Average is " << count/5;
}