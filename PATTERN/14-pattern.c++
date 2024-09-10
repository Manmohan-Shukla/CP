

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number for number pyramid";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            /* code */
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout << j;
        }
        for (int q = i-1; q >=1 ; q--)
        {
            cout<<q;
        }
        
        cout << endl;
    }
}