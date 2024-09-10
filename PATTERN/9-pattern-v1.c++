// binary triangle version 1


#include <iostream>
using namespace std;
int main()
{

    int a;
    cout << "enter the odd number";
    cin >> a;
    int k = 23;
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            k = 0;
        }
        else
        {
            k = 1;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << k;
            if (k==1)
            {
                k=0;
            }
            else{
                k=1;
            }
        }
        cout << endl;
    }
}
