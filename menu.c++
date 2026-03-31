#include <iostream>
using namespace std;

int main()
{
    int num;
    int choice;
    int arr[20];

    while(true)
    {
        cout << endl << "Welcome to programming !" << endl;

        cout << endl << "Enter 1 to create an array:" << endl;
        cout << "Enter 2 to view an elements of array:" << endl;
        cout << "Enter 3 to delete an elements of array:" << endl;
        cout << "Enter 4 to upadte an elememts of array:" << endl;
        cout << "Enter 0 to Exit" << endl;
        
        cout << endl << "Enter your choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter how many elements you want to add:";
            cin >> num;

            if(num > 0 && num < 20)
            {
                for(int i = 0; i<num; i++)
                {
                    cout << "Enter the value for element number:" << i+1 << "=";
                    cin >> arr[i];

                    cout << endl <<"Array Created Successfully !" << endl;
                }
            }
            else
                {
                    cout << endl <<"Invalid Sized";
                }
            break;
        case 2:
                cout << "Element in array";
                for(int i = 0; i < num; i++)
                {
                    cout << arr[i] << " ";
                }
            break;

        case 3:
                int pos;
                cout << "Enter the position of elements to remove: ";
                cin >> pos;

                if(pos >= 0 && pos < num)
                {
                    for(int i = pos-1; i < num-1;i++)
                    {
                        arr[i] = arr[i+1];
                    }
                    num--;
                    cout << endl << "Element deleted successfully !" << endl;
                }else{
                    cout << endl << "Possition is not valid !" << endl;
                }
                break;
        
        case 4 :
                int poss,val;
                cout << "Enter the position of element to update: ";
                cin >> poss;
                cout << "Enter the value of element to update: ";
                cin >> val;

                if(poss >= 0 && poss<num)
                {
                    arr[poss-1] = val;
                    cout << endl << "Element update successfully !" << endl;
                }
                else{
                    cout << endl << "Position is not valid!" << endl;
                }
                break;
        case 0:
                cout << endl << "Visit Again !";
                return 0;
        default:
            break;
        }
    }
}