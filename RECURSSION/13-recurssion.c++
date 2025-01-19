#include <iostream>
using namespace std;

void MAX(int arr[], int n, int idx, int max)
{
    if (idx == n)
    {
        cout << max;
        return;
    }
    if (max < arr[idx])
        max = arr[idx];
    MAX(arr, n, idx + 1, max);
}


int MAXARR(int arr[], int n, int idx)
{
    if (idx == n)
        return INT8_MIN;
    return max(arr[idx], MAXARR(arr, n, idx + 1));
}

 
int main()
{
    int arr[] = {2, 1, 34, 45, 4, 6, 456, 34, 23, 44, 53};
    int n = sizeof(arr) / sizeof(arr[0]);
    MAX(arr, n, 0, INT8_MIN);
}