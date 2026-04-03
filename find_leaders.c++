#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {12,2,34,45,5};
    int n = 5;

    int max_leader = arr[n-1];
    cout << "Leaders in this array are:" << max_leader << " ";

    for(int i = n-2; i > 0; i--)
    {
        if(arr[i] > max_leader)
        {
            max_leader = arr[i];
            cout << max_leader << endl;
        }
    }
}