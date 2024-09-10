#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // for (int k = 1; k <= n - i; k++)
        // {
        //     cout << " ";
        // }
        for (int j = i; j >=1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}