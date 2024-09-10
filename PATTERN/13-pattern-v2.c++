// odd pyramid version 1

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the rows of pyramid";
    cin >> a;
    int nst=1;
    int nsp=a-1;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        nsp--;
        for (int k = 0; k < nst; k++)
        {
            cout << "*";
        }
        nst+=2;
        cout << endl;
    }
}
