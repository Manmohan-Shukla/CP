// star  inverted triangle

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the rows of star  inverted triangle";
    cin >> a ;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a+1-i; j++)
        {
            cout << " * " ;
        }
        cout << endl;
    }
}
