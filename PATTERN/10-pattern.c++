// star  inverted  half triangle

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the rows of star  inverted  half triangle";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
