#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6};
    int *ptr = arr; // address of first element of array
    // int *ptr=&arr
    int *pt = &arr[0];
    // int *pt=arr[0]
    cout << ptr;
    for (int i = 0; i < 7; i++)
    {
        cout << ptr[i] << endl;
    }
    for (int i = 0; i < 7; i++)
    {
        cout << *ptr << endl;
        cout << i[arr] << endl;
        cout << i[ptr] << endl;
        ptr++;
    }
    ptr = arr;
}