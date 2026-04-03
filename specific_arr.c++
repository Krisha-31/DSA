#include<iostream>
using namespace std;

// Traversing array to find specific elements of an array

int main()
{
    int arr[5] = {10,12,14,16,18};
    bool found = false;

    int val;
    cout << "Enter the value to find :";
    cin >> val;

    for(int i = 0; i<5 ; i++)
    {
        if(arr[i] == val)
        {
            cout << "The element " << val << "is on index number " << i;
            found = true;
        }
    }

    if(found == false)
    {
        cout << "Value is not in index" << endl;
    }
}