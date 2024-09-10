// odd pyramid version 1

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the rows of pyramid";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2*i-1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
