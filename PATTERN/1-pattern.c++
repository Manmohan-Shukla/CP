//  star rectangle

#include <iostream>
using namespace std;
int main()
{

    int a, b;
    cout << "enter the sides of star rectangle";
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
