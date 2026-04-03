#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {12,13,13,14,15};
    int idx;
    for(int i = 0;i < 5; i++)
    {
        for(int j = i+1; j<5; j++)
        {
            if(arr[i] == arr[j])
            {
                cout << "Dupicate removed!" ;
            }
        }
    }
}