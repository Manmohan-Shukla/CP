#include <iostream>
using namespace std;
void display(int arr[], int n, int idx)
{
    if (idx == n)
        return;
    cout << arr[idx] << " ";
    display(arr, n, idx + 1);
}

// void display2(vector<int>& v,int idx){
//     if (idx == v.size()) return;
//     cout << v[idx] << " ";
//     display(v, idx + 1);
// }

int main()
{
    int arr[] = {2, 1, 34, 45, 4, 6, 456, 34, 23, 44, 53};
    int n = sizeof(arr) / sizeof(arr[0]);
    display(arr, n, 0);
}